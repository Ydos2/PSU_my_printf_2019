/*
** EPITECH PROJECT, 2019
** parameter5
** File description:
** parameter5
*/

#include "./../../include/my.h"

int my_puts_string_lm(va_list display)
{
    unsigned char i = va_arg(display, int);
    return (i);
}

int my_puts_decimal_lm(va_list display)
{
    unsigned short int i = va_arg(display, int);
    return (i);
}

int my_puts_carac_lm(va_list display)
{
    unsigned long int i = va_arg(display, int);
    return (i);
}

int my_puts_binary_lm(va_list display)
{
    unsigned long long int i = va_arg(display, int);
    return (i);
}