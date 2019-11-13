/*
** EPITECH PROJECT, 2019
** parameter5
** File description:
** parameter5
*/

#include "./../../include/my.h"

int string_lm(va_list display)
{
    unsigned char i = va_arg(display, int);
    return (i);
}

int decimal_lm(va_list display)
{
    unsigned short int i = va_arg(display, int);
    return (i);
}

int carac_lm(va_list display)
{
    unsigned long int i = va_arg(display, int);
    return (i);
}

int binary_lm(va_list display)
{
    unsigned long long int i = va_arg(display, int);
    return (i);
}