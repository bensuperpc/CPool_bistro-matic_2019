/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** test_my_count_with_priority.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

int my_atol(char *str, int arg, int i);

int multiply_args(char *str);

int add_args(char *str);

Test(my_atol, simple_num)
{
    char *str = "+1023";
    char *sr = "1098-";

    int j = my_atol(str, 1, 0);
    int s = my_atol(sr, 0, 4);
    cr_assert_eq(j, 1023, "expected %d but got %d", 1023, j);
    cr_assert_eq(s, 1098, "expected %d but got %d", 1098, s);
}

Test(my_atol, double_num)
{
    char *str = "34989+456";

    int j = my_atol(str, 1, 5);
    int s = my_atol(str, 0, 5);
    cr_assert_eq(j, 456, "expected %d but got %d", 456, j);
    cr_assert_eq(s, 34989, "expected %d but got %d", 34989, s);
}

Test(my_atol, simple_neg)
{
    char *str = "-89";

    int j = my_atol(str, 1, 0);
    int s = my_atol(str, 0, 0);
    cr_assert_eq(j, 89, "expected %d but got %d", 89, j);
    cr_assert_eq(s, 0, "expected %d but got %d", 0, s);
}

Test(multiply_args, simple_mult)
{
    char *str = "76*89";
    char *sr = "56/4";

    str = multiply_args(str);
    sr = multiply_args(sr);
    cr_assert_eq(str, "6764", "expected %s but got %s", "6764", str);
    cr_assert_eq(sr, "14", "expected %d but got %d", "14", sr);
}

Test(add_args, simple_add)
{
    char *str = "76+89";
    char *sr = "56-4";

    str = add_args(str);
    sr = add_args(sr);
    cr_assert_str_eq(str, "165", "expected %d but got %d", "165", str);
    cr_assert_str_eq(sr, "52", "expected %d but got %d", "52", sr);
}
