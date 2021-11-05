/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_revstr_pt.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void my_add_zero_pt(char **str1, char **str2);

Test(my_add_zero_pt, simple_1)
{
    char *str_res1 = my_strdup("5");
    char *str_res2 = my_strdup("5");
    char *str_exp1 = "05";
    char *str_exp2 = "05";
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    my_add_zero_pt(&str_res1, &str_res2);
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    cr_assert_str_eq(str_res1, str_exp1, "The result was %s. Expected %s",
        str_res1, str_exp1);
    cr_assert_str_eq(str_res2, str_exp2, "The result was %s. Expected %s",
        str_res2, str_exp2);
    free(str_res1);
    free(str_res2);
}

Test(my_add_zero_pt, simple_2)
{
    char *str_res1 = my_strdup("500");
    char *str_res2 = my_strdup("50");
    char *str_exp1 = "0500";
    char *str_exp2 = "0050";
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    my_add_zero_pt(&str_res1, &str_res2);
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    cr_assert_str_eq(str_res1, str_exp1, "The result was %s. Expected %s",
        str_res1, str_exp1);
    cr_assert_str_eq(str_res2, str_exp2, "The result was %s. Expected %s",
        str_res2, str_exp2);
    free(str_res1);
    free(str_res2);
}

Test(my_add_zero_pt, simple_3)
{
    char *str_res1 = my_strdup("-500");
    char *str_res2 = my_strdup("-50");
    char *str_exp1 = "0-500";
    char *str_exp2 = "00-50";
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    my_add_zero_pt(&str_res1, &str_res2);
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    cr_assert_str_eq(str_res1, str_exp1, "The result was %s. Expected %s",
        str_res1, str_exp1);
    cr_assert_str_eq(str_res2, str_exp2, "The result was %s. Expected %s",
        str_res2, str_exp2);
    free(str_res1);
    free(str_res2);
}

Test(my_add_zero_pt, simple_4)
{
    char *str_res1 = my_strdup("0");
    char *str_res2 = my_strdup("0");
    char *str_exp1 = "00";
    char *str_exp2 = "00";
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    my_add_zero_pt(&str_res1, &str_res2);
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    cr_assert_str_eq(str_res1, str_exp1, "The result was %s. Expected %s",
        str_res1, str_exp1);
    cr_assert_str_eq(str_res2, str_exp2, "The result was %s. Expected %s",
        str_res2, str_exp2);
    free(str_res1);
    free(str_res2);
}

Test(my_add_zero_pt, simple_5)
{
    char *str_res1 = my_strdup("500000000000000000000000");
    char *str_res2 = my_strdup("5");
    char *str_exp1 = "0500000000000000000000000";
    char *str_exp2 = "0000000000000000000000005";
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    my_add_zero_pt(&str_res1, &str_res2);
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    cr_assert_str_eq(str_res1, str_exp1, "The result was %s. Expected %s",
        str_res1, str_exp1);
    cr_assert_str_eq(str_res2, str_exp2, "The result was %s. Expected %s",
        str_res2, str_exp2);
    free(str_res1);
    free(str_res2);
}

Test(my_add_zero_pt, empty)
{
    char *str_res1 = my_strdup("");
    char *str_res2 = my_strdup("");
    char *str_exp1 = "0";
    char *str_exp2 = "0";
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    my_add_zero_pt(&str_res1, &str_res2);
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    cr_assert_str_eq(str_res1, str_exp1, "The result was %s. Expected %s",
        str_res1, str_exp1);
    cr_assert_str_eq(str_res2, str_exp2, "The result was %s. Expected %s",
        str_res2, str_exp2);
    free(str_res1);
    free(str_res2);
}

Test(my_add_zero_pt, one_empty)
{
    char *str_res1 = my_strdup("50");
    char *str_res2 = my_strdup("");
    char *str_exp1 = "050";
    char *str_exp2 = "000";
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    my_add_zero_pt(&str_res1, &str_res2);
    my_revstr_pt(&str_res1);
    my_revstr_pt(&str_res2);
    cr_assert_str_eq(str_res1, str_exp1, "The result was %s. Expected %s",
        str_res1, str_exp1);
    cr_assert_str_eq(str_res2, str_exp2, "The result was %s. Expected %s",
        str_res2, str_exp2);
    free(str_res1);
    free(str_res2);
}
