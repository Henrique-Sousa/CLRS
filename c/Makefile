CFLAGS = -g -std=c99 -pedantic -Wall
LDFLAGS = -g
CC = gcc

.PHONY: all

all: sort.out linear-search.out binary-addition.out

binary-addition.out: binary-addition.o algorithms.o utils.o
	$(CC) $^ -o $@ $(LDFLAGS)

linear-search.out: linear-search.o algorithms.o
	$(CC) $^ -o $@ $(LDFLAGS)

sort.out: utils.o algorithms.o sort.o
	$(CC) $^ -o $@ $(LDFLAGS)

clean:
	rm -f *.o && rm -f *.out
