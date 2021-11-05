/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** find_first_num.c
*/

#include "my.h"

int find_first_num(char *str, int j)
{
    while (j >= 0 && my_char_is_sign(str[j]) == 0) {
        j--;
    }
    return (j);
}
