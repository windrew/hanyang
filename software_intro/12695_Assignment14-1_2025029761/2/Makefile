program: main.o pointmath.o
	gcc -o program main.o pointmath.o
main.o: main.c
	gcc -c main.c
pointmath.o: pointmath.c
	gcc -c pointmath.c
clean:
	rm program main.o pointmath.o