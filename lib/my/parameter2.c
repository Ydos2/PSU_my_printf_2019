/*
** EPITECH PROJECT, 2019
** parameter2
** File description:
** parameter2
*/

#include "./../../include/my.h"

int my_puts_octal(va_list display)
{
    int i = va_arg(display, int);
    int j = 4294967295;
    int k = j - i;

    if (i < 0)
        my_put_nbr_base(j, "01234567");
    else
        my_put_nbr_base(i, "01234567");
}

int my_puts_adresse(va_list display)
{
    int i = 0;
    int nbr = va_arg(display, int);

    i += my_putstr("0x");
    i += my_put_nbr_base(nbr, "0123456789abcdef");
}

int my_puts_hexamin(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "0123456789abcdef");
}

int my_puts_hexamaj(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "0123456789ABCDEF");
}