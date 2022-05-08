

CC = gcc
CFLAGS=-Wall

all: setbit
.PHONY : all

setbit: main1.o
	$(CC) $(CFLAGS) -o setbit main1.o

main1.o: main1.c
	$(CC) $(CFLAGS) -c -o main1.o main1.c
	
debug: clean main1.c
	$(CC) $(CFLAGS) -g -o test main1.c
	gdb -tui test
	
.PHONY: clean
clean:
	rm -rf *.o
