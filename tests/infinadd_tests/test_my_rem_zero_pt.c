/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_revstr_pt.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void my_rem_zero_pt(char **str);

Test(my_rem_zero_pt, simple_1)
{
    char *str_res = my_strdup("5");
    char *str_exp = "5";
    my_rem_zero_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_rem_zero_pt, simple_2)
{
    char *str_res = my_strdup("50000000000000");
    char *str_exp = "50000000000000";
    my_rem_zero_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_rem_zero_pt, simple_3)
{
    char *str_res = my_strdup("-50000000000000");
    char *str_exp = "-50000000000000";
    my_rem_zero_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_rem_zero_pt, simple_4)
{
    char *str_res = my_strdup("-0000050000000000000");
    char *str_exp = "-50000000000000";
    my_rem_zero_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_rem_zero_pt, simple_5)
{
    char *str_res = my_strdup("-000005");
    char *str_exp = "-5";
    my_rem_zero_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_rem_zero_pt, empty)
{
    char *str_res = my_strdup("");
    char *str_exp = "";
    my_rem_zero_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}
