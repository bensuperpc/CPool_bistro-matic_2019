/*
** EPITECH PROJECT, 2019
** compare_expr_base.c
** File description:
** compare expr with ops and base
*/

#include <stdlib.h>
#include "my.h"

int check_base(char expr, char *base, char *ops)
{
    int len = my_strlen(base) + my_strlen(ops);
    char *base_ops = malloc(sizeof(char) * len + 1);
    int i;

    base_ops = my_strcat_dup(base, ops);
    base_ops[len + 1] = '\0';
    for (i = 0; base_ops[i]; i++)
        if (expr == base_ops[i])
            return (1);
    return (0);
}

int check_expr_base(char *expr, char *base, char *ops)
{
    int i = 0;
    int j = 0;

    while (expr[i]) {
        j = j + check_base(expr[i], base, ops);
        i++;
    }
    if (j != my_strlen(expr))
        return (0);
    return (1);
}
