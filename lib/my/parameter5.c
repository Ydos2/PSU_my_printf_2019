/*
** EPITECH PROJECT, 2019
** parameter5
** File description:
** parameter5
*/

#include "./../../include/my.h"

int string_lm(va_list display)
{
    va_arg(display, unsigned char *);
}

int decimal_lm(va_list display)
{
    int i = va_arg(display, unsigned int);
}

int carac_lm(va_list display)
{
    my_putchar(va_arg(display, long int));
}

int binary_lm(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "01");
}