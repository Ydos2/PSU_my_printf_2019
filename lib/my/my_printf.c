/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "./../../include/my.h"

int my_printf(char *str, ...)
{
    va_list j;
    va_start(j, str);
    int a = 0, b = 0, c = 0, d = 0, e = 0, g = 0, twitter = 0;

    for (int z = 0; str[z] != '\0'; z++, d = 0) {
        for (int w = 0; w == 0; a = str[z], b = str[z+1], w++);
        for (int w = 0; w == 0 && e == 1; e = hcf(str, z, j), c--, d++, w++);
        if (twitter == 1)
            d = 1, e = 1, twitter = 0;
        if (c == 1 && b != 37) {
            c = check_flag(str, z, j, g), g = 0, d = 1;
        } if (c == 2)
            z++, c = 0;
        if (a == 37)
            c = 1, d = 1;
        for (int w = 0; w == 0 && b == 37; g += 1, w++);
        for (int w = 0; w == 0 && b == 35; twitter = 1, d = 1, w++);
        for (int w = 0; w == 0 && d == 0; my_putchar(str[z]), w++);
    }
    va_end(j);
    return (0);
}

int check_flag(char *str, int z, va_list j, int g)
{
    char flag[15] = "sidcbopxXs%muhl";
    int it = 0, re = 0, a = 0;
    int (*flag_print[15])() = {my_puts_string, my_puts_decimal,
    my_puts_decimal, my_puts_carac, my_puts_binary, my_puts_octal,
    my_puts_adresse, my_puts_hexamin, my_puts_hexamaj, my_puts_printer,
    my_puts_percent, my_puts_stre, my_puts_decinosi, my_puts_decimal_lm,
    my_puts_carac_lm};

    for (it = 0; flag[it] != '\0'; it++) {
        if (flag[it] == str[z] && it == 12)
            flag_print[it](j, g);
        else if (flag[it] == str[z]) {
            re = flag_print[it](j);
            break;
        }
    }
    a = check_flag2(it, z, str, re);
    return (a);
}

int check_flag2(int it, int z, char *str, int re)
{
    char flag[15] = "sidcbopxXs%muhl";
    int (*flag_print[15])() = {my_puts_string, my_puts_decimal,
    my_puts_decimalV2, my_puts_carac, my_puts_binary, my_puts_octalV2,
    my_puts_adresse, my_puts_hexaminV2, my_puts_hexamajV2, my_puts_printer,
    my_puts_percent, my_puts_stre, my_puts_decinosiV2, my_puts_decimal_lm,
    my_puts_carac_lm};

    for (int ti = 0; it == 13 || it == 14 || flag[ti] != '\0'; ti++) {
        if (flag[ti] == str[z+1]) {
            flag_print[ti](re);
            return (2);
        }
    }
    return (0);
}

int hcf(char *str, int z, va_list j)
{
    char flag[3] = "oxX";

    int (*flag_print[3])() = {my_puts_add0chiffre,
    my_puts_xx, my_puts_printerr};

    for (int it = 0; flag[it] != '\0'; it++) {
        if (flag[it] == str[z])
            flag_print[it](j);
    }
    return (0);
}