/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_compare_arg_with_str.c
*/

#include "my.h"

int my_compare_char_with_str(char c, char *str, int i)
{
    int k = 0;

    while (str[k]) {
        if (str[k] == c && k != i)
            return (0);
        k++;
    }
    return (1);
}