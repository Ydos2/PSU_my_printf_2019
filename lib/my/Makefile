##
## EPITECH PROJECT, 2019
## LIB
## File description:
## Makefile
##

NAMELIB		= libmy.a
LIBCREATE		= ar rc $(NAMELIB) *.o
LIBCOMPILE		= gcc -c *.c

all	: libc copylib deplacerlib clean

libc:
		$(LIBCOMPILE); $(LIBCREATE)

deplacerlib:
		cp $(NAMELIB) ./../

copylib:
		cp $(NAMELIB) ./../../

clean:
		rm -f *.o