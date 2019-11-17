/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>

typedef struct s_max
{
    int co;
}   t_max;

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_put_nbr_pos(int nbr);
int my_put_nbr_neg(int nbr);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strdup(char const *src);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
char **my_str_to_word_array(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_int_to_str(int nb);
int my_atoi(char *str);
int my_intlen(int nb);
int my_put_nbr_base(int nbr, char *base);

int my_printf(char *p, ...);
int check_flag(char *str, int z, va_list j, int g);
int hcf(char *str, int z, va_list j);
int check_flag2(int it, int z, char *str, int re);

int redirect1(int arg, va_list display, int count, int b);
int redirect2(char arg_str, va_list display, int count, int b);
int redirect3(char arg_str, va_list display, int count, int b);
int ash(int arg_str, va_list display, int count, int b);

int my_puts_string(va_list display);
int my_puts_decimal(va_list display);
int my_puts_carac(va_list display);
int my_puts_binary(va_list display);
int my_puts_my_puttstr(char const *str);

int my_puts_octal(va_list display);
int my_puts_adresse(va_list display);
int my_puts_hexamin(va_list display);
int my_puts_hexamaj(va_list display);
int my_puts_countt(va_list display, int count_n);

int my_puts_printer(va_list display);
int my_puts_percent(va_list display, int b);
int my_puts_stre(va_list display);
int my_puts_decinosi(va_list display);

int my_puts_add0chiffre(va_list display);
int my_puts_xx(va_list display);
int my_puts_printerr(va_list display);

int my_puts_string_lm(va_list display);
int my_puts_decimal_lm(va_list display);
int my_puts_carac_lm(va_list display);
int my_puts_binary_lm(va_list display);
int my_puts_decimalV2(int i);

int my_puts_octalV2(int i);
int my_puts_hexaminV2(int i);
int my_puts_hexamajV2(int i);
int my_puts_decinosiV2(int i);
#endif /* !MY_H_ */