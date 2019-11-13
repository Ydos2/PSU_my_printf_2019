/*
** EPITECH PROJECT, 2019
** parameter2
** File description:
** parameter2
*/

#include "./../../include/my.h"

int octal(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "01234567");
}

int adresse(va_list display)
{

}

int hexamin(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "0123456789abcdef");
}

int hexamaj(va_list display)
{
    my_put_nbr_base(va_arg(display, int), "0123456789ABCDEF");
}