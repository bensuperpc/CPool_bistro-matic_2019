/*
** EPITECH PROJECT, 2019
** check_ops_parenthesis.c
** File description:
** check ops before parenthesis and after
*/

#include "my.h"

int check_ops_parenthesis(char *expr)
{
    for (int i = 1; expr[i + 1]; i++) {
        if (expr[i] == '(' && (my_char_is_sign(expr[i - 1]) == 0))
            return (0);
        if ((expr[i] == ')') && (my_char_is_sign(expr[i + 1]) == 0))
            return (0);
    }
    return (1);
}
