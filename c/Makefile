CFLAGS = -g -std=c99 -pedantic -Wall
LDFLAGS = -g
CC = gcc

EXECS = binary-addition linear-search sort
AUXS = algorithms utils
AUXSC = $(addsuffix .c, $(AUXS)) 
SRCS = $(addsuffix .c, $(EXECS)) $(AUXSC)

.PHONY: all tags clean 

all: $(EXECS)

$(EXECS): %: %.c $(AUXSC)

clean:
	$(RM) *.o $(EXECS)

tags: 	
	$(CC) -M $(SRCS) | sed -e 's/[\\ ]/\n/g' | sed -e '/^$$/d' -e '/\.o:[ \t]*$$/d' | ctags -L - --c-kinds=+p --fields=+S
	ctags -aR .
