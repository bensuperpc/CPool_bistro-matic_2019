/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_change_expr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *infin_add(char *str1, char *str2);

Test(infin_add, simple_1)
{
    char *str1 = "50";
    char *str2 = "50";
    char *str_exp = "100";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_2)
{
    char *str1 = "111";
    char *str2 = "111";
    char *str_exp = "222";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_3)
{
    char *str1 = "1";
    char *str2 = "9";
    char *str_exp = "10";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_4)
{
    char *str1 = "1";
    char *str2 = "1";
    char *str_exp = "2";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_5)
{
    char *str1 = "0";
    char *str2 = "0";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}
/*
Test(infin_add, simple_6)
{
    char *str1 = "4564756584";
    char *str2 = "5876876874";
    char *str_exp = "10441633458";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}
*/
Test(infin_add, empty)
{
    char *str1 = "";
    char *str2 = "";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, one_empty_1)
{
    char *str1 = "";
    char *str2 = "5";
    char *str_exp = "5";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, one_empty_2)
{
    char *str1 = "";
    char *str2 = "-0";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, one_empty_3)
{
    char *str1 = "";
    char *str2 = "50000000000000000000000000000";
    char *str_exp = "50000000000000000000000000000";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, one_neg_1_low)
{
    char *str1 = "-50";
    char *str2 = "100";
    char *str_exp = "50";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, one_neg_2_low)
{
    char *str1 = "-100";
    char *str2 = "50";
    char *str_exp = "-50";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, one_neg_1_up)
{
    char *str1 = "50";
    char *str2 = "-100";
    char *str_exp = "-50";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, one_neg_2_up)
{
    char *str1 = "-100";
    char *str2 = "51";
    char *str_exp = "-49";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, negative_1)
{
    char *str1 = "-99";
    char *str2 = "-1";
    char *str_exp = "-100";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, negative_2)
{
    char *str1 = "-0";
    char *str2 = "-0";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, negative_3)
{
    char *str1 = "-000000000000000000000000000000000000000000000";
    char *str2 = "-000000000000000000000000000000000000000000000";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_huge_1)
{
    char *str1 = "999999999";
    char *str2 = "1";
    char *str_exp = "1000000000";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_huge_2)
{
    char *str1 = "150000000000000000000000";
    char *str2 = "52";
    char *str_exp = "150000000000000000000052";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_huge_3)
{
    char *str1 = "999999999999999999999999999999999999999999999999";
    char *str2 = "1";
    char *str_exp = "1000000000000000000000000000000000000000000000000";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, simple_huge_4)
{
    char *str1 = "1000000000000000000000000000000000000000000000000000000000000"
                 "0000000000000000000000000000000000000000000000000000000000000"
                 "000000000000000000000000000";
    char *str2 = "1";
    char *str_exp = "1000000000000000000000000000000000000000000000000000000000"
                    "0000000000000000000000000000000000000000000000000000000000"
                    "000000000000000000000000000000001";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, zero_before)
{
    char *str1 = "000999999999";
    char *str2 = "01";
    char *str_exp = "1000000000";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, zero)
{
    char *str1 = "0";
    char *str2 = "0";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, zero_1)
{
    char *str1 = "000000";
    char *str2 = "0000";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, zero_2)
{
    char *str1 = "0000000000000000000000000000000000000000000";
    char *str2 = "0000000000000000000000000000000000000000000";
    char *str_exp = "0";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}

Test(infin_add, wrong_1)
{
    char *str1 = "1";
    char *str2 = "a";
    char *str_exp = "1X";
    char *str_res = infin_add(str1, str2);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
}
