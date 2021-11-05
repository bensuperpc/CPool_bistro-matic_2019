/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** test_my_str_assembly.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_str_assembly, simple_3)
{
    char *str1 = "Bonjour,";
    char *str2 = " il est";
    char *str3 = " 10h37";
    char *str = my_str_assembly(str1, str2, str3);
    cr_assert_str_eq(str, "Bonjour, il est 10h37",
        "The result was %s. Expected %s", str, "Bonjour, il est 10h37");
}

Test(my_str_assembly, simple_2)
{
    char *str1 = "";
    char *str2 = "-98";
    char *str3 = "";
    char *str = my_str_assembly(str1, str2, str3);
    cr_assert_str_eq(str, "-98", "The result was %s. Expected %s", str, "-98");
}

Test(my_str_assembly, simple_empty)
{
    char *str1 = "Bonjour, il est";
    char *str2 = "";
    char *str3 = " 10h37";
    char *str = my_str_assembly(str1, str2, str3);
    cr_assert_str_eq(str, "Bonjour, il est 10h37",
        "The result was %s. Expected %s", str, "Bonjour, il est 10h37");
}

Test(my_str_assembly, double_empty)
{
    char *str1 = "";
    char *str2 = "Bonjour, il est 10h37";
    char *str3 = "";
    char *str = my_str_assembly(str1, str2, str3);
    cr_assert_str_eq(str, "Bonjour, il est 10h37",
        "The result was %s. Expected %s", str, "Bonjour, il est 10h37");
}

Test(my_str_assembly, triple_empty)
{
    char *str1 = "";
    char *str2 = "";
    char *str3 = "";
    char *str = my_str_assembly(str1, str2, str3);
    cr_assert_str_eq(str, "", "The result was %s. Expected %s", str, "");
}

Test(my_str_assembly, one_empty)
{
    char *str1 = "";
    char *str2 = "Bonjour, nous sommes le 3 novembre, il est 10h54.";
    char *str3 = "";
    char *str_exp = "Bonjour, nous sommes le 3 novembre, il est 10h54.";
    char *str = my_str_assembly(str1, str2, str3);
    cr_assert_str_eq(
        str, str_exp, "The result was %s. Expected %s", str, str_exp);
}
