/*
** EPITECH PROJECT, 2019
** parameter4
** File description:
** parameter4
*/

#include "./../../include/my.h"

void add0chiffre(va_list display)
{
    write(1, "0", 2);
    my_put_nbr_base(va_arg(display, int), "01234567");
}

void xx(va_list display)
{
    write(1, "0x", 3);
    my_put_nbr_base(va_arg(display, int), "0123456789abcdef");
}

void printerr(va_list display)
{
    write(1, "0X", 3);
    my_put_nbr_base(va_arg(display, int), "0123456789ABCDEF");
}