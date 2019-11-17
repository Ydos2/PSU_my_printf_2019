/*
** EPITECH PROJECT, 2019
** parameter4
** File description:
** parameter4
*/

#include "./../../include/my.h"

int my_puts_add0chiffre(va_list display)
{
    write(1, "0", 2);
    my_put_nbr_base(va_arg(display, int), "01234567");
}

int my_puts_xx(va_list display)
{
    write(1, "0x", 3);
    my_put_nbr_base(va_arg(display, int), "0123456789abcdef");
}

int my_puts_printerr(va_list display)
{
    write(1, "0X", 3);
    my_put_nbr_base(va_arg(display, int), "0123456789ABCDEF");
}

int my_puts_decimalV2(int i)
{
    my_put_nbr(i);
}