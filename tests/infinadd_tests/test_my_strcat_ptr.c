/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_strcat_ptr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_strcat_ptr, simple_1)
{
    char *str1 = my_strdup("01234");
    char *str2 = "56789";
    char *str_exp = "0123456789";
    my_strcat_ptr(&str1, str2);
    cr_assert_str_eq(
        str1, str_exp, "The result was %s. Expected %s", str1, str_exp);
}

Test(my_strcat_ptr, simple_2)
{
    char *str1 = my_strdup("Bonjour, il est ");
    char *str2 = "23h57, nous sommes le 31 octobre";
    char *str_exp = "Bonjour, il est 23h57, nous sommes le 31 octobre";
    my_strcat_ptr(&str1, str2);
    cr_assert_str_eq(
        str1, str_exp, "The result was %s. Expected %s", str1, str_exp);
}

Test(my_strcat_ptr, simple_3)
{
    char *str1 = my_strdup("01234567");
    char *str2 = "01234567";
    char *str_exp = "0123456701234567";
    my_strcat_ptr(&str1, str2);
    cr_assert_str_eq(
        str1, str_exp, "The result was %s. Expected %s", str1, str_exp);
}

Test(my_strcat_ptr, one_empty_1)
{
    char *str1 = my_strdup("");
    char *str2 = "Bonjour";
    char *str_exp = "Bonjour";
    my_strcat_ptr(&str1, str2);
    cr_assert_str_eq(
        str1, str_exp, "The result was %s. Expected %s", str1, str_exp);
}

Test(my_strcat_ptr, one_empty_2)
{
    char *str1
        = my_strdup("Bonjour, nous sommes le 1er Novembre, il est 12h37.");
    char *str2 = "";
    char *str_exp = "Bonjour, nous sommes le 1er Novembre, il est 12h37.";
    my_strcat_ptr(&str1, str2);
    cr_assert_str_eq(
        str1, str_exp, "The result was %s. Expected %s", str1, str_exp);
}

Test(my_strcat_ptr, empty)
{
    char *str1 = my_strdup("");
    char *str2 = "";
    char *str_exp = "";
    my_strcat_ptr(&str1, str2);
    cr_assert_str_eq(
        str1, str_exp, "The result was %s. Expected %s", str1, str_exp);
}
