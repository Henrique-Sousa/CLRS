CFLAGS = -g -std=c99 -pedantic -Wall
LDFLAGS = -g
CC = gcc

.PHONY: all

all: insertion-sort.out linear-search.out binary-addition.out


binary-addition.out: binary-addition.o algorithms.o utils.o
	$(CC) $^ -o $@ $(LDFLAGS)

linear-search.out: linear-search.o algorithms.o
	$(CC) $^ -o $@ $(LDFLAGS)

insertion-sort.out: insertion-sort.o algorithms.o utils.o
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) -c $^ -o $@ $(CFLAGS)

clean:
	rm -f *.o && rm -f *.out
