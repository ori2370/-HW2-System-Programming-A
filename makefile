CFLAGS= -Wall -g
CC= gcc
all:connections libmymat.a

connections: main.o libmymat.a
	$(CC) $(CFLAGS) -o connections main.o libmymat.a

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c
libmymat.a:my_mat.o
	ar -rcs libmymat.a my_mat.o
my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c
clean:
	rm -f *a *.o connections
