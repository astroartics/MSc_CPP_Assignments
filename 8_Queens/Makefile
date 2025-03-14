CC=g++
CCFLAGS=-I.
DEPS=Board.h Queen.h
TARGET=output
OBJS=main.o Queen.o Board.o

%.o: %.cpp $(DEPS)
	$(CC) -o $@ $<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^