/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** change_expr.c
*/

#include "my.h"

char switch_num(const char expr, const char *base, char *ops);

char return_to_base(const char expr, const char *base, char *ops);

char *change_expr(
    const char *expr, const char *base, const char *ops, int args);

char switch_num(const char expr, const char *base, char *ops)
{
    char *basenum = "0123456789";
    char *basesign = "()+-*/%%";
    int i = 0;
    int j = 0;

    while (base[i]) {
        if (expr == base[i])
            return (basenum[i]);
        i++;
    }
    while (ops[j]) {
        if (expr == ops[j])
            return (basesign[j]);
        j++;
    }
    return '0';
}

char return_to_base(const char expr, const char *base, char *ops)
{
    char *basenum = "0123456789";
    char *basesign = "()+-*/%%";
    int i = 0;
    int j = 0;

    while (basenum[i]) {
        if (expr == basenum[i])
            return (base[i]);
        i++;
    }
    while (basesign[j]) {
        if (expr == basesign[j])
            return (ops[j]);
        j++;
    }
    return '0';
}

char *change_expr(const char *expr, const char *base, const char *ops, int args)
{
    int i = 0;
    char *str;

    str = my_strdup(expr);
    while (expr[i]) {
        if (args == 0)
            str[i] = switch_num(expr[i], base, ops);
        else if (args == 1)
            str[i] = return_to_base(expr[i], base, ops);
        i++;
    }
    str[i] = '\0';
    return (str);
}
