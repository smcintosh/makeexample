program: random.o input.o main.o
	gcc -o program random.o input.o main.o

random.o: random.c
	gcc -c random.c

input.o: input.c
	gcc -c input.c

main.o: main.c
	gcc -c main.c

.PHONY: clean
clean:
	rm -f random.o input.o main.o program
