CFLAGS:= -I -std=c11 -Wall -Wextra -pedantic
LFLAGS:= -L../lib/ -lraylib -lm -lX11

../bin/people: people.c
	gcc $(CFLAGS) -o ../bin/people people.c $(LFLAGS)
