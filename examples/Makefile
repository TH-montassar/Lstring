CFLAGS = -g -Wall -Werror
CC = gcc

all: example

example:example.o
	$(CC) $(CFLAGS) -o example example.o
example.o: example.c
	$(CC) $(CFLAGS) -c example.c
clean:
	rm -rf example.o example