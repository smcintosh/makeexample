program: random.o input.o main.o
	gcc -o $@ $^

%.o: %.c
	gcc -c $<

.PHONY: clean
clean:
	rm random.o input.o main.o program
