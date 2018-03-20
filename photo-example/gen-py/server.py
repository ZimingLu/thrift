#! /usr/bin/env python
# -*- coding: utf-8 -*-
import sys
from PIL import Image
import os
import numpy as np
sys.path.append('./gen-py')

from send_photo import Photo
from send_photo import ttypes
from model import Model

from thrift.transport import TSocket
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.server import TServer

__HOST = 'localhost'
__PORT = 9090
path = '/Users/luyongchen/Development/photo-example/gen-py/server.jpg'
imgPath = "/Users/luyongchen/data/train/cat."
# add the operation here for the data receive
class Handler(object):
    def SendPhoto(self, write_buffer, buffer_size):
        # print("start receiving!")
        with open(path, "wb") as imageFile:
            f = imageFile.write(write_buffer)
        pred = model.pred(path)
        sumerr = np.sum((imgRef - pred)**2,axis=1)
        ind = np.argpartition(sumerr, 3)[:3]
        b = list()
        for i in ind:
            retImgPath = imgPath + str(i) + ".jpg"
            with open(retImgPath, "rb") as imageFile:
                f = imageFile.read()
                b.append(bytearray(f))
        return ttypes.TOP3(b[0], b[1], b[2])


if __name__ == '__main__':
    handler = Handler()
    model = Model()
    imgRef = np.genfromtxt('./feature.csv')
    processor = Photo.Processor(handler)
    transport = TSocket.TServerSocket(__HOST, __PORT)
    tfactory = TTransport.TBufferedTransportFactory()
    pfactory = TBinaryProtocol.TBinaryProtocolFactory()

    rpcServer = TServer.TSimpleServer(processor,transport, tfactory, pfactory)

    print('Starting the rpc server at', __HOST,':', __PORT)
    rpcServer.serve()
