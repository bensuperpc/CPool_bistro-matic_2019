/*
** EPITECH PROJECT, 2019
** expr_is_sign.
** File description:
** check if expr is not only with signs
*/

#include "my.h"

int expr_is_sign(char *expr)
{
    for (int i = 0; expr[i]; i++) {
        if (my_char_is_sign(expr[i]) == 0 && expr[i] != '(' && expr[i] != ')')
            return (1);
    }
    return (0);
}
