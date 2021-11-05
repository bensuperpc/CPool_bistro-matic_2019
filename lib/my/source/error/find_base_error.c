/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** find_base_error.c
*/

#include "my.h"

int find_base_error(char *str, int arg)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(str);

    while (str[i]) {
        j = j + my_compare_char_with_str(str[i], str, i);
        i++;
    }
    if (arg == 0) {
        if (j != 10 || len != 10) {
            return (0);
        }
    } else {
        if (j != 7 || len != 7)
            return (0);
    }
    return (1);
}