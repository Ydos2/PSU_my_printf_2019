/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "include/my.h"

int main(int ac, char **av)
{
    char nom = "Mathias95";
    int unsigned age = 18295;
    char str[5];

	printf("Address of a: %p\n", nom);
	my_printf("Address of a: %#X\n", age);
    //my_printf("Je m'appelle %n, j'ai %u ans\n", nom, age);
    return (0);
}