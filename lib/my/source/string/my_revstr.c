/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    char temps = '0';
    int x = 0;
    int y = 0;
    while (str[y] != '\0')
        y++;
    y--;

    while (x < y) {
        temps = str[x];
        str[x] = str[y];
        str[y] = temps;
        x++;
        y--;
    }
    return str;
}
