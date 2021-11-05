/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_showmem
*/

#include "my.h"

int my_showmem(char const *str, int size)
{
    int i = 0;
    char c[5];
    while (size > i) {
        display_my_showmem(str[i], c);
        my_putchar(c[2] + 48);
        my_putchar(c[1] + 48);
        my_putchar(c[0] + 48);
        my_putchar(str[i]);
        my_putchar('|');
        i++;
    }
    return (0);
}

void display_my_showmem(int value, char *str)
{
    int temps = 0;
    int i = 0;
    while (value >= 16) {
        temps = value % 16;
        str[i] = temps;
        value = (value - temps) / 16;
        i++;
    }
    str[i] = value;
}
