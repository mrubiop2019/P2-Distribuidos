CC=gcc
CFLAGS= -Wall -Wshadow -Wvla -g
OBJ = server.o cliente.o
INCLUDE_DIR = ../include

all: P1 P2 P3

%.o: %.c 
	$(CC) -c $(CFLAGS) $^

P1: P1.o $(INCLUDE_DIR)/stub.h
	$(CC) -o $@ $^

P2: P2.o $(INCLUDE_DIR)/stub.h
	$(CC) -o $@ $^

P3: P3.o $(INCLUDE_DIR)/stub.h
	$(CC) -o $@ $^

clean:
	rm -f *.o P1 P2 P3