/*
** EPITECH PROJECT, 2019
** double_ops.c
** File description:
** check double operators in expr
*/

#include "my.h"

int check_ops_error(char *expr)
{
    int i = 1;

    while (expr[i]) {
        if (my_char_is_sign(expr[i]) != 0 && my_char_is_sign(expr[i + 1]) != 0)
            return (0);
        i++;
    }
    if (my_char_is_sign(expr[i - 1]) != 0)
        return (0);
    return (1);
}
