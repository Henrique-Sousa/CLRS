CFLAGS := -g -std=c99 -pedantic -Wall
LDFLAGS := -g
CC := gcc

BUILD_DIR := ./build

EXECS := binary-addition linear-search sort
AUXS := algorithms.c utils.c
SRCS := $(addsuffix .c, $(EXECS)) $(AUXS)

.PHONY: all tags clean 

all: $(EXECS)

$(EXECS): %: %.c $(AUXS)
	mkdir -p $(BUILD_DIR) 
	$(CC) $^ $(CFLAGS) $(LDFLAGS) -o $(BUILD_DIR)/$@ 

clean:
	$(RM) -r $(BUILD_DIR) 

tags: 	
	$(CC) -M $(SRCS) \
		| sed -e 's/[\\ ]/\n/g' | sed -e '/^$$/d' -e '/\.o:[ \t]*$$/d' \
		| ctags -L - --c-kinds=+p
	ctags -aR .
