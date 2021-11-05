/*
** EPITECH PROJECT, 2019
** check_expr.c
** File description:
** check if expr is valid
*/

#include "my.h"

int check_expr(char *str)
{
    int i = 0;

    while (my_char_is_sign(str[i]) == 1 || my_char_is_sign(str[i]) == 2) {
        if (my_char_is_sign(str[i]) == 2) {
            return (0);
        }
        i++;
    }
    return (1);
}
