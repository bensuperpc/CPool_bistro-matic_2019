/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_change_expr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_inv_two_str_pt, simple_1)
{
    char *str1 = my_strdup("1234");
    char *str2 = my_strdup("5678");
    char *str3 = "1234";
    char *str4 = "5678";
    my_inv_two_str_pt(&str1, &str2);
    cr_assert_str_eq(str1, str4, "The result was %s. Expected %s", str1, str4);
    cr_assert_str_eq(str2, str3, "The result was %s. Expected %s", str2, str3);
    free(str1);
    free(str2);
}

Test(my_inv_two_str_pt, simple_2)
{
    char *str1 = my_strdup("Bonjour");
    char *str2 = my_strdup("est");
    char *str3 = "Bonjour";
    char *str4 = "est";
    my_inv_two_str_pt(&str1, &str2);
    cr_assert_str_eq(str1, str4, "The result was %s. Expected %s", str1, str4);
    cr_assert_str_eq(str2, str3, "The result was %s. Expected %s", str2, str3);
    free(str1);
    free(str2);
}

Test(my_inv_two_str_pt, simple_3)
{
    char *str1 = my_strdup("Bonjour");
    char *str2 = my_strdup("est");
    char *str3 = "Bonjour";
    char *str4 = "est";
    my_inv_two_str_pt(&str1, &str2);
    cr_assert_str_eq(str1, str4, "The result was %s. Expected %s", str1, str4);
    cr_assert_str_eq(str2, str3, "The result was %s. Expected %s", str2, str3);
    free(str1);
    free(str2);
}

Test(my_inv_two_str_pt, simple_4)
{
    char *str1 = my_strdup("1");
    char *str2 = my_strdup("2");
    char *str3 = "1";
    char *str4 = "2";
    my_inv_two_str_pt(&str1, &str2);
    cr_assert_str_eq(str1, str4, "The result was %s. Expected %s", str1, str4);
    cr_assert_str_eq(str2, str3, "The result was %s. Expected %s", str2, str3);
    free(str1);
    free(str2);
}

Test(my_inv_two_str_pt, empty)
{
    char *str1 = my_strdup("");
    char *str2 = my_strdup("");
    char *str3 = "";
    char *str4 = "";
    my_inv_two_str_pt(&str1, &str2);
    cr_assert_str_eq(str1, str4, "The result was %s. Expected %s", str1, str4);
    cr_assert_str_eq(str2, str3, "The result was %s. Expected %s", str2, str3);
    free(str1);
    free(str2);
}

Test(my_inv_two_str_pt, one_empty)
{
    char *str1 = my_strdup("Bonjour\n");
    char *str2 = my_strdup("");
    char *str3 = "Bonjour\n";
    char *str4 = "";
    my_inv_two_str_pt(&str1, &str2);
    cr_assert_str_eq(str1, str4, "The result was %s. Expected %s", str1, str4);
    cr_assert_str_eq(str2, str3, "The result was %s. Expected %s", str2, str3);
    free(str1);
    free(str2);
}
