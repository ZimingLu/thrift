import keras
import matplotlib.image as mpimg
import numpy as np
from keras.preprocessing.image import load_img, img_to_array
from keras.applications import vgg19

imgpath = "/Users/luyongchen/Development/Keras/mnist_png/mnist_png/training/total"
img_height = 280
img_width = 280

class Model(object):
	def __init__(self):
		self.model = vgg19.VGG19(weights='imagenet',
	                    include_top=False)
		print('Model loaded.')

	def preprocess_image(self, image_path):
	    img = load_img(image_path, target_size=(img_height, img_width))
	    img = img_to_array(img)
	    img = np.expand_dims(img, axis=0)
	    img = vgg19.preprocess_input(img)
	    return img

	def deprocess_image(self, x):
	    # Remove zero-center by mean pixel
	    x[:, :, 0] += 103.939
	    x[:, :, 1] += 116.779
	    x[:, :, 2] += 123.68
	    # 'BGR'->'RGB'
	    x = x[:, :, ::-1]
	    x = np.clip(x, 0, 255).astype('uint8')
	    return x

	def pred(self, path):
		res = self.preprocess_image(path)
		pred = self.model.predict(res)
		predReshape = pred.reshape(32768)
		return predReshape