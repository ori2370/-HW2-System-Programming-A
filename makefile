CFLAGS= -Wall -g
CC= gcc
all:connections

connections: main.o my_mat.o
	$(CC) $(CFLAGS) -o connections main.o my_mat.o

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c
clean:
	rm -f *.o connections
