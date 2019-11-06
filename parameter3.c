/*
** EPITECH PROJECT, 2019
** parameter3
** File description:
** parameter3
*/

#include "include/my.h"

int my_putstr(char const *str)
{
    char i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int printer(va_list display)
{
    char const *str = va_arg(display, char *);
    char i = 0;
    int a = 0;

    while (str[i] != '\0') {
        a = str[i];
        if (a < 32 || a > 127) {
            write(1, "\\", 1);
            my_put_nbr_base(va_arg(display, int), "01234567");
        } else
            my_putchar(str[i]);
        i++;
    }
    return (0);
}

int percent(va_list display, int b)
{
    my_put_nbr(b);
    return (0);
}

int stre(va_list display)
{
    strerror(errno);
    if (errno != -1)
        write(1, "Success", 8);
    else
        write(1, "No such file or directory", 25);
    return (0);
}

int decinosi(va_list display)
{
    long int a = va_arg(display, unsigned int);
    long int b = 4294967296;
    long int div = 1;

    if (a < 0) {
        b = b - a;
    }
    while ((a / div ) != 0){
        div = div*10;
    }
    while (div != 1){
        my_putchar(((a%div)/(div/10)) + '0');
        div = div / 10;
    }
    return (0);
}