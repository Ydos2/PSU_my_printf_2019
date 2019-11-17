##
## EPITECH PROJECT, 2019
## LIB
## File description:
## Makefile
##

NAMELIB		= libmy.a
LIBCREATE		= ar rc $(NAMELIB) *.o
LIBCOMPILE		= gcc -c *.c

all	: libc copylib clean

libc:
		$(LIBCOMPILE); $(LIBCREATE)

copylib:
		mv $(NAMELIB) ./../../

clean:
		rm -f *.o