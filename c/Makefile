CFLAGS = -g -std=c99 -pedantic -Wall
LDFLAGS = -g
CC = gcc

.PHONY: all

all: insertion-sort.out

insertion-sort.out: insertion-sort.o algorithms.o utils.o
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) -c $^ -o $@ $(CFLAGS)

clean:
	rm -f *.o && rm -f *.out
