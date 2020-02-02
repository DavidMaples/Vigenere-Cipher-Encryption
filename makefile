CC = g++

CFLAGS = -std=c++11 -g -Wall

default: make

make: main.o userParse.o userEncrypt.o userList.o hash.o
	$(CC) $(CFLAGS) -o main main.o userParse.o userEncrypt.o userList.o hash.o -lm

userParse.o: userParse.cpp userParse.hpp
	$(CC) $(CFLAGS) -c userParse.cpp

userEncrypt.o: userEncrypt.cpp userEncrypt.hpp
	$(CC) $(CFLAGS) -c userEncrypt.cpp

userList.o: userList.cpp userList.hpp
	$(CC) $(CFLAGS) -c userList.cpp

hash.o: hash.cpp hash.hpp
	$(CC) $(CFLAGS) -c hash.cpp

main.o: main.cpp userParse.hpp userEncrypt.hpp userList.hpp hash.hpp 
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) *.o *~ main
