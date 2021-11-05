/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** write_first_arg.c
*/

#include "my.h"

char **write_first_arg(char **args, char *str, int j)
{
    int i = find_first_num(str, j);
    int k = 0;

    if (str[0] == '-') {
        args[0][0] = '-';
        k++;
        while (k < j) {
            args[0][k] = str[k];
            k++;
        }
    }
    while (k < j) {
        args[0][k] = str[k];
        k++;
    }
    args[0][k] = '\0';
    return (args);
}
