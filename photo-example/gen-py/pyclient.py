#!/usr/bin/env python
 
import sys
from PIL import Image
import os
sys.path.append('./gen-py')
 
from send_photo import Photo
 
from thrift import Thrift 
from thrift.transport import TSocket
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
path = '/Users/luyongchen/Development/photo-example/gen-cpp/cat.jpg'
 
try:
  transport = TSocket.TSocket('localhost', 9090)
  transport = TTransport.TBufferedTransport(transport)
  protocol = TBinaryProtocol.TBinaryProtocol(transport)
  client = Photo.Client(protocol)
  transport.open()
 
  size = os.path.getsize(path)
  with open(path, "rb") as imageFile:
    f = imageFile.read()
    b = bytearray(f)
  client.SendPhoto(b, len(b))
  transport.close()
except Thrift.TException, ex:
  print "%s" % (ex.message)
