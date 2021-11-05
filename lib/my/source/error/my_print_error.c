/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_print_error.c
*/

#include "my.h"

int my_print_error(char *base, char *ops, char *expr)
{
    int i = 0;
    char *str = change_expr(expr, base, ops, 1);

    i = i + find_base_error(base, 0);
    i = i + find_base_error(ops, 1);
    i = i + check_parenthesis(str);
    i = i + compare_ops_base(ops, base);
    i = i + check_expr(str);
    i = i + check_expr_base(expr, base, ops);
    str = my_delete_sign(str);
    i = i + check_ops_error(str);
    i = i + check_div_nul(str);
    if (i != 8)
        return (0);
    return (1);
}
