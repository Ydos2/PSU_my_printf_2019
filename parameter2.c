/*
** EPITECH PROJECT, 2019
** parameter2
** File description:
** parameter2
*/

#include "include/my.h"

int octal(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "01234567");
    return (0);
}

int adresse(va_list display, char argument_str)
{
    char const *base;
    char res[9];
    int i = 0;
    int argument = argument_str;

    res[i] = base[(argument % 16)];
    write(1, "0x", 2);
    while (i < 9)
        write(1, &res[i++], 1);
    return (0);
}

int hexamin(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "0123456789abcdef");
    return (0);
}

int hexamaj(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "0123456789ABCDEF");
    return (0);
}

int countt(va_list display, int count_n)
{
    my_put_nbr(count_n);
    return (0);
}