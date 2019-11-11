/*
** EPITECH PROJECT, 2019
** switch
** File description:
** switch
*/

#include "./../../include/my.h"

int redirect1(int arg, va_list display, int count, int b)
{
    char arg_str = arg;

    switch (arg_str) {
    case 's':
        string(display);
        break;
    case 'i':
        decimal(display);
        break;
    case 'd':
        decimal(display);
        break;
    case 'c':
        carac(display);
        break;
    }
    redirect2(arg_str, display, count, b);
    return (0);
}

int redirect2(char arg_str, va_list display, int count, int b)
{
    switch (arg_str) {
    case 'b':
        binary(display);
        break;
    case 'o':
        octal(display);
        break;
    case 'p':
        adresse(display);
        break;
    case 'x':
        hexamin(display);
        break;
    case 'X':
        hexamaj(display);
        break;
    }
    redirect3(arg_str, display, count, b);
    return (0);
}

int redirect3(char arg_str, va_list display, int count, int b)
{
    switch (arg_str) {
    case 'n':
        countt(display, count);
        break;
    case 'S':
        printer(display);
        break;
    case '%':
        percent(display, b);
        break;
    case 'm':
        stre(display);
        break;
    case 'u':
        decinosi(display);
        break;
    }
    return (0);
}

int ash(int arg, va_list display, int count, int b)
{
    char arg_str = arg;

    switch (arg_str) {
    case 'o':
        add0chiffre(display);
        break;
    case 'x':
        xx(display);
        break;
    case 'X':
        printerr(display);
        break;
    }
    return (0);
}