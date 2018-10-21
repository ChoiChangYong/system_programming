cal : ./lib/add.o ./lib/subtract.o ./lib/multiply.o ./lib/divide.o main.o
	gcc -o cal ./lib/add.o ./lib/subtract.o ./lib/multiply.o ./lib/divide.o main.o
main.o : ./lib/add.c ./lib/subtract.c ./lib/multiply.c ./lib/divide.c main.c
	gcc -c main.c
add.o : ./lib/add.c
	gcc -c ./lib/add.c
subtract.o : ./lib/subtract.c
	gcc -c ./lib/subtract.c
multiply.o : ./lib/multiply.c
	gcc -c ./lib/multiply.c
divide.o : ./lib/divide.c
	gcc -c ./lib/divide.c

clean :
	rm cal ./lib/add.o ./lib/subtract.o ./lib/multiply.o ./lib/divide.o main.o
