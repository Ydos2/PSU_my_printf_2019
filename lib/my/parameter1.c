/*
** EPITECH PROJECT, 2019
** parameter1
** File description:
** parameter1
*/

#include "./../../include/my.h"

int string(va_list display)
{
    my_putstr(va_arg(display, char *));
    return (0);
}

int decimal(va_list display)
{
    my_put_nbr(va_arg(display, int));
    return (0);
}

int carac(va_list display)
{
    my_putchar(va_arg(display, int));
    return (0);
}

int binary(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "01");
    return (0);
}