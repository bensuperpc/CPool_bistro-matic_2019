/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** test_calculate_part.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *treat_str(char *str);

Test(treat_str, simple_1)
{
    char *str = my_strdup("98+78*5");
    char *sr = treat_str(str);

    cr_assert_str_eq(sr, "488", "The result was %s. Expected %s", sr, "488");
}

Test(treat_str, complexe_1)
{
    char *div = my_strdup("78-56/8+3*5");
    char *res = treat_str(div);

    cr_assert_str_eq(res, "86", "The result was %s. Expected %s", res, "86");
}

Test(treat_str, simple_arg)
{
    char *div = my_strdup("657");
    char *res = treat_str(div);

    cr_assert_str_eq(res, "657", "The result was %s. Expected %s", res, "657");
}

Test(treat_str, simple_neg_arg)
{
    char *div = my_strdup("-657");
    char *res = treat_str(div);

    cr_assert_str_eq(
        res, "-657", "The result was %s. Expected %s", res, "-657");
}