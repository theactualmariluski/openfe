CC = gcc

make:
	$(CC) -o program src/main.c -lncurses
