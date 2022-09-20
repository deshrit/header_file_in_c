# variable
CC=gcc

# default
all: main

main: main.c
	$(CC) -o main main.c functions.c

clean:
	rm main