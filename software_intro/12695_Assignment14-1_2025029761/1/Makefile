program: main.o add.o
	gcc -o program main.o add.o
main.o: main.c
	gcc -c main.c
add.o: add.c
	gcc -c add.c
clean:
	rm program main.o add.o