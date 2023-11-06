CC = gcc
CFLAGS = -Werror -Wextra -Wall -c

all: launch

launch : petlib.a
	gcc -g main.c petlib.a

petlib.a : objects
	ar -rcs $@ *.o

objects : 
	$(CC) $(CFLAGS) *.c

clean:
	rm -f *.o

fclean: clean
	rm -f petlib.a
