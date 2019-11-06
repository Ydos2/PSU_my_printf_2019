/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "include/my.h"

int my_printf(char *str, ...)
{
    va_list j;
    va_start(j, str);
    int a = 0, b = 0, c = 0, d = 0, e = 0, co = 0, g = 0, twitter = 0;

    for (int z = 0; str[z] != '\0'; z++, d = 0) {
        for (int w = 0; w == 0; a = str[z], b = str[z+1], w++);
        for (int w = 0; w == 0 && e == 1; e = ash(a, j, co, g), c--, d++, w++);
        if (twitter == 1)
            d = 1, e = 1, twitter = 0;
        if (c == 1 && b != 37) {
            c = redirect1(a, j, co, g);
            g = 0, d = 1;
        } if (a == 37)
            c = 1, d = 1;
        for (int w = 0; w == 0 && b == 37; g += 1, d = 1, w++);
        for (int w = 0; w == 0 && b == 35; twitter = 1, d = 1, w++);
        for (int w = 0; w == 0 && d == 0; my_putchar(str[z]), co++, w++);
    }
    va_end(j);
    return (0);
}