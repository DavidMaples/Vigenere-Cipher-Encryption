CC = g++

CFLAGS = -std=c++11 -g -Wall

default: make

make: main.o userParse.o
	$(CC) $(CFLAGS) -o main main.o userParse.o -lm

userParse.o: userParse.cpp userParse.hpp
	$(CC) $(CFLAGS) -c userParse.cpp

main.o: main.cpp userParse.hpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) *.o *~ main
