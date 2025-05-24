CC = g++
CXX = g++ -std=c++20

CFLAGS   = -g -Wall 
CXXFLAGS = -g -Wall 

main: main.o
main.o: main.cpp

.PHONY: clean
clean:
	rm -rf *.o main
