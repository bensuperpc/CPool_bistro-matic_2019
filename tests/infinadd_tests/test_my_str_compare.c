/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_str_compare_inv.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_str_compare_inv, simple_1)
{
    char *str1 = my_strdup("50");
    char *str2 = my_strdup("50");
    my_revstr_pt(&str1);
    my_revstr_pt(&str2);
    int result = my_str_compare_inv(str1, str2);
    int exp = 0;
    cr_assert_eq(result, exp, "The result was %d. Expected %d", result, exp);
    free(str1);
    free(str2);
}

Test(my_str_compare_inv, simple_2)
{
    char *str1 = my_strdup("50");
    char *str2 = my_strdup("51");
    my_revstr_pt(&str1);
    my_revstr_pt(&str2);
    int result = my_str_compare_inv(str1, str2);
    int exp = 2;
    cr_assert_eq(result, exp, "The result was %d. Expected %d", result, exp);
    free(str1);
    free(str2);
}

Test(my_str_compare_inv, simple_3)
{
    char *str1 = my_strdup("52");
    char *str2 = my_strdup("51");
    my_revstr_pt(&str1);
    my_revstr_pt(&str2);
    int result = my_str_compare_inv(str1, str2);
    int exp = 1;
    cr_assert_eq(result, exp, "The result was %d. Expected %d", result, exp);
    free(str1);
    free(str2);
}

Test(my_str_compare_inv, empty)
{
    char *str1 = my_strdup("");
    char *str2 = my_strdup("");
    my_revstr_pt(&str1);
    my_revstr_pt(&str2);
    int result = my_str_compare_inv(str1, str2);
    int exp = 0;
    cr_assert_eq(result, exp, "The result was %d. Expected %d", result, exp);
    free(str1);
    free(str2);
}

Test(my_str_compare_inv, simple_4)
{
    char *str1 = my_strdup("005000000000001");
    char *str2 = my_strdup("005000100000000");
    my_revstr_pt(&str1);
    my_revstr_pt(&str2);
    int result = my_str_compare_inv(str1, str2);
    int exp = 2;
    cr_assert_eq(result, exp, "The result was %d. Expected %d", result, exp);
    free(str1);
    free(str2);
}

Test(my_str_compare_inv, simple_6)
{
    char *str1 = my_strdup("6");
    char *str2 = my_strdup("5");
    my_revstr_pt(&str1);
    my_revstr_pt(&str2);
    int result = my_str_compare_inv(str1, str2);
    int exp = 1;
    cr_assert_eq(result, exp, "The result was %d. Expected %d", result, exp);
    free(str1);
    free(str2);
}

Test(my_str_compare_inv, huge)
{
    char *str1 = my_strdup("555555555555555555");
    char *str2 = my_strdup("666666666666666666");
    my_revstr_pt(&str1);
    my_revstr_pt(&str2);
    int result = my_str_compare_inv(str1, str2);
    int exp = 2;
    cr_assert_eq(result, exp, "The result was %d. Expected %d", result, exp);
    free(str1);
    free(str2);
}
