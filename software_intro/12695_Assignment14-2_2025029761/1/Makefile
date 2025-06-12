program: main.o io.o account.o bank.o
	gcc -o program main.o io.o account.o bank.o
main.o: main.c
	gcc -c main.c
io.o: io.c
	gcc -c io.c
account.o: account.c
	gcc -c account.c
bank.o: bank.c
	gcc -c bank.c
clean:
	rm program main.o add.o