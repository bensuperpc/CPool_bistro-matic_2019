/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_change_expr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *infin_div(char *op1, char *op2);

Test(infin_div, simple_1)
{
    char *str1 = "50";
    char *str2 = "2";
    char *exp = "25";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, simple_2)
{
    char *str1 = "500";
    char *str2 = "2";
    char *exp = "250";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, huge_1)
{
    char *str1 = "1234";
    char *str2 = "8";
    char *exp = "154";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, huge_2)
{
    char *str1 = "12345";
    char *str2 = "8";
    char *exp = "1543";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, empty)
{
    char *str1 = "0";
    char *str2 = "0";
    char *exp = "0";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, "0", "The result was %s. Expected %s", res, exp);
}

Test(infin_div, neg_1)
{
    char *str1 = "-500";
    char *str2 = "2";
    char *exp = "-250";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, neg_2)
{
    char *str1 = "20";
    char *str2 = "2000";
    char *exp = "0";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, one_zero)
{
    char *str1 = "0";
    char *str2 = "50";
    char *exp = "0";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, neg_3)
{
    char *str1 = "-20";
    char *str2 = "-2000";
    char *exp = "0";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}

Test(infin_div, neg_4)
{
    char *str1 = "-2000";
    char *str2 = "-20";
    char *exp = "100";
    char *res = infin_div(str1, str2);
    cr_assert_str_eq(res, exp, "The result was %s. Expected %s", res, exp);
}
