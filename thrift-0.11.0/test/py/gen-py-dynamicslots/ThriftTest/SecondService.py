#
# Autogenerated by Thrift Compiler (0.11.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py:dynamic,slots
#

from thrift.Thrift import TType, TMessageType, TFrozenDict, TException, TApplicationException
from thrift.protocol.TProtocol import TProtocolException
from thrift.TRecursive import fix_spec

import sys
import logging
from .ttypes import *
from thrift.Thrift import TProcessor
from thrift.transport import TTransport
from thrift.protocol.TBase import TBase, TFrozenBase, TExceptionBase, TTransport
all_structs = []


class Iface(object):
    def secondtestString(self, thing):
        """
        Prints 'testString("%s")' with thing as '%s'
        @param string thing - the string to print
        @return string - returns the string 'thing'

        Parameters:
         - thing
        """
        pass


class Client(Iface):
    def __init__(self, iprot, oprot=None):
        self._iprot = self._oprot = iprot
        if oprot is not None:
            self._oprot = oprot
        self._seqid = 0

    def secondtestString(self, thing):
        """
        Prints 'testString("%s")' with thing as '%s'
        @param string thing - the string to print
        @return string - returns the string 'thing'

        Parameters:
         - thing
        """
        self.send_secondtestString(thing)
        return self.recv_secondtestString()

    def send_secondtestString(self, thing):
        self._oprot.writeMessageBegin('secondtestString', TMessageType.CALL, self._seqid)
        args = secondtestString_args()
        args.thing = thing
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_secondtestString(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = secondtestString_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        raise TApplicationException(TApplicationException.MISSING_RESULT, "secondtestString failed: unknown result")


class Processor(Iface, TProcessor):
    def __init__(self, handler):
        self._handler = handler
        self._processMap = {}
        self._processMap["secondtestString"] = Processor.process_secondtestString

    def process(self, iprot, oprot):
        (name, type, seqid) = iprot.readMessageBegin()
        if name not in self._processMap:
            iprot.skip(TType.STRUCT)
            iprot.readMessageEnd()
            x = TApplicationException(TApplicationException.UNKNOWN_METHOD, 'Unknown function %s' % (name))
            oprot.writeMessageBegin(name, TMessageType.EXCEPTION, seqid)
            x.write(oprot)
            oprot.writeMessageEnd()
            oprot.trans.flush()
            return
        else:
            self._processMap[name](self, seqid, iprot, oprot)
        return True

    def process_secondtestString(self, seqid, iprot, oprot):
        args = secondtestString_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = secondtestString_result()
        try:
            result.success = self._handler.secondtestString(args.thing)
            msg_type = TMessageType.REPLY
        except TTransport.TTransportException:
            raise
        except TApplicationException as ex:
            logging.exception('TApplication exception in handler')
            msg_type = TMessageType.EXCEPTION
            result = ex
        except Exception:
            logging.exception('Unexpected exception in handler')
            msg_type = TMessageType.EXCEPTION
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("secondtestString", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

# HELPER FUNCTIONS AND STRUCTURES


class secondtestString_args(TBase):
    """
    Attributes:
     - thing
    """

    __slots__ = (
        'thing',
    )


    def __init__(self, thing=None,):
        self.thing = thing
all_structs.append(secondtestString_args)
secondtestString_args.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'thing', 'UTF8', None, ),  # 1
)


class secondtestString_result(TBase):
    """
    Attributes:
     - success
    """

    __slots__ = (
        'success',
    )


    def __init__(self, success=None,):
        self.success = success
all_structs.append(secondtestString_result)
secondtestString_result.thrift_spec = (
    (0, TType.STRING, 'success', 'UTF8', None, ),  # 0
)
fix_spec(all_structs)
del all_structs

