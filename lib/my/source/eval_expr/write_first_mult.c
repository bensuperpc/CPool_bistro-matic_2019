/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** write_first_mult.c
*/

#include "my.h"

int find_i(char *str, int i, int j)
{
    i = j;
    while (str[i] && my_char_is_sign(str[i - 1]) == 0) {
        i--;
    }
    if (j == 1)
    i = 0;
    return (i);
}

char **write_first_mult(char **args, char *str, int j)
{
    int i = find_i(str, i, j);
    int k = 0;

    if (str[i - 1] == '-') {
        args[0][0] = '-';
        k++;
        while (i < j) {
            args[0][k] = str[i];
            k++;
            i++;
        }
    }
    while (i < j) {
        args[0][k] = str[i];
        k++;
        i++;
    }
    args[0][k] = '\0';
    return (args);
}
