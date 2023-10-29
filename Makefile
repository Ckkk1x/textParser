CC = gcc
CFLAGS = -Werror -Wextra -Wall -c

all: petlib.a

petlib.a : objects
	ar -rcs $@ *.o

objects : 
	$(CC) $(CFLAGS) *.c

clean:
	rm -f *.o

fclean: clean
	rm -f petlib.a
