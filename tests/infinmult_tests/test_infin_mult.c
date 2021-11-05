/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_change_expr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *infin_mult(char *str1, char *str2);

Test(infin_mult, simple_1)
{
    char *str1 = "50";
    char *str2 = "50";
    char *str_exp = "2500";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, simple_2)
{
    char *str1 = "111";
    char *str2 = "111";
    char *str_exp = "12321";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, simple_3)
{
    char *str1 = "1";
    char *str2 = "9";
    char *str_exp = "9";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, simple_4)
{
    char *str1 = "5";
    char *str2 = "5";
    char *str_exp = "25";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, simple_5)
{
    char *str1 = "0";
    char *str2 = "0";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, empty)
{
    char *str1 = "";
    char *str2 = "";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, one_empty_1)
{
    char *str1 = "";
    char *str2 = "5";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, one_empty_2)
{
    char *str1 = "";
    char *str2 = "-0";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, one_empty_3)
{
    char *str1 = "";
    char *str2 = "50000000000000000000000000000";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, one_neg_1_low)
{
    char *str1 = "-50";
    char *str2 = "100";
    char *str_exp = "-5000";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, one_neg_2_low)
{
    char *str1 = "-100";
    char *str2 = "50";
    char *str_exp = "-5000";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, one_neg_1_up)
{
    char *str1 = "50";
    char *str2 = "-100";
    char *str_exp = "-5000";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, one_neg_2_up)
{
    char *str1 = "-100";
    char *str2 = "51";
    char *str_exp = "-5100";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, negative_1)
{
    char *str1 = "-99";
    char *str2 = "-2";
    char *str_exp = "198";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, negative_2)
{
    char *str1 = "-0";
    char *str2 = "-0";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, negative_3)
{
    char *str1 = "-000000000000000000000000000000000000000000000";
    char *str2 = "-000000000000000000000000000000000000000000000";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, simple_huge_1)
{
    char *str1 = "999999999";
    char *str2 = "1";
    char *str_exp = "999999999";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, simple_huge_2)
{
    char *str1 = "150000000000000000000000";
    char *str2 = "1";
    char *str_exp = "150000000000000000000000";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, simple_huge_3)
{
    char *str1 = "00005500";
    char *str2 = "1";
    char *str_exp = "5500";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, zero_before)
{
    char *str1 = "00010";
    char *str2 = "01";
    char *str_exp = "10";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, zero)
{
    char *str1 = "0";
    char *str2 = "0";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, zero_1)
{
    char *str1 = "000000";
    char *str2 = "0000";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_mult, zero_2)
{
    char *str1 = "0000000000000000000000000000000000000000000";
    char *str2 = "0000000000000000000000000000000000000000000";
    char *str_exp = "0";
    char *str_res = infin_mult(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}
