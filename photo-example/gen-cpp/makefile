//BOOST_DIR = /usr/local/boost/include/boost
//THRIFT_DIR = /usr/local/include/thrift
LIB_DIR = /usr/local/lib
INCLUDE_DIR=/usr/local/include

GEN_SRC = send_photo_constants.cpp send_photo_types.cpp Photo.cpp

default: server client

server: server.cpp
	g++ -o server -std=c++11 -I . -I /usr/local/include -L /usr/local/lib -lthrift server.cpp ${GEN_SRC}

client: client.cpp
	g++ -o client -std=c++11 -I . -I /usr/local/include -L /usr/local/lib -lthrift client.cpp ${GEN_SRC}
clean:
	$(RM) -r client server
