/*
** EPITECH PROJECT, 2019
** parameter2
** File description:
** parameter2
*/

#include "./../../include/my.h"

int my_puts_octalV2(int i)
{
    my_put_nbr_base(i, "01234567");
}

int my_puts_hexaminV2(int i)
{
    my_put_nbr_base(i, "0123456789abcdef");
}

int my_puts_hexamajV2(int i)
{
    my_put_nbr_base(i, "0123456789ABCDEF");
}

int my_puts_decinosiV2(int i)
{
    long int a = i;
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
}