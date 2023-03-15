CC=gcc
CFLAGS=-Wall -g

myprogram: main.o file1.o file2.o
    $(CC) $(CFLAGS) -o myprogram main.o file1.o file2.o

main.o: main.c file1.h file2.h
    $(CC) $(CFLAGS) -c main.c

file1.o: file1.c file1.h
    $(CC) $(CFLAGS) -c file1.c

file2.o: file2.c file2.h
    $(CC) $(CFLAGS) -c file2.c
