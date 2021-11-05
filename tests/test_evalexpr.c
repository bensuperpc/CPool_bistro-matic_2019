/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_test_evalexpr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *eval_expr(
    char const *base, char const *ops, char const *expr, unsigned int size);

Test(eval_expr, complex_3)
{
    char *expr = "(1+2)+(3+4)+5+6";
    char *ops = "()+-*/%";
    char *base = "0123456789";
    char *res = eval_expr(base, ops, expr, 100);

    cr_assert_str_eq(res, "21", "The result was %s. Expected %s", res, "21");
}