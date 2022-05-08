

CC = gcc
CFLAGS=-Wall

all: any
.PHONY : all

any: My_getchar.o main1.o
	$(CC) $(CFLAGS) -o any My_getchar.o main1.o
	
My_getchar.o: My_getchar.c
	$(CC) $(CFLAGS) -c -o My_getchar.o My_getchar.c

main1.o: main1.c
	$(CC) $(CFLAGS) -c -o main1.o main1.c
	
debug: clean My_getchar.c main1.c
	$(CC) $(CFLAGS) -g -o test main1.c My_getchar.c
	gdb -tui test
	
.PHONY: clean
clean:
	rm -rf *.o
