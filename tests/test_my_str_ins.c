/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** test_my_str_ins.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_str_ins, simple)
{
    char *insert_s = "il est ";
    char *s = "Bonjour, 23h42";
    char *t = my_str_ins(s, insert_s, 9);
    cr_assert_str_eq(t, "Bonjour, il est 23h42",
        "The result was %s. Expected %s", t, "Bonjour, il est 23h42");
}

Test(my_str_ins, empty_insert)
{
    char *insert_s = "";
    char *s = "Bonjour, 23h42";
    char *t = my_str_ins(s, insert_s, 9);
    cr_assert_str_eq(t, "Bonjour, 23h42", "The result was %s. Expected %s", t,
        "Bonjour, 23h42");
}

Test(my_str_ins, empty_str)
{
    char *insert_s = "Bonjour";
    char *s = "";
    char *t = my_str_ins(s, insert_s, 0);
    cr_assert_str_eq(
        t, "Bonjour", "The result was %s. Expected %s", t, "Bonjour");
}

Test(my_str_ins, simple_2)
{
    char *str1 = "12347890";
    char *str2 = "56";
    char *str = my_str_ins(str1, str2, 4);

    cr_assert_str_eq(
        str, "1234567890", "The result was %s. Expected %s", str, "1234567890");
}
