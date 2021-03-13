all:exe


exe:main.o lib.o
	gcc main.o lib.o -o pendu.exe

main.o : main.c
	gcc -c main.c -o main.o

lib.o : lib.c lib.h
	gcc -c lib.c -o lib.o


clean:
	rm *.o *.exe