/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_my_print_error.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

int my_print_error(char *base, char *ops, char *expr);

Test(my_print_error, no_problem)
{
    char *expr = "10+23+4";
    char *base = "0123456789";
    char *ops = "()+-*/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 1, "The result was %d. Expected %d", i, 1);
}

Test(my_print_error, no_problem2)
{
    char *expr = "-10+23+4";
    char *base = "0123456789";
    char *ops = "()+-*/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 1, "The result was %d. Expected %d", i, 1);
}

Test(my_print_error, no_problem3)
{
    char *expr = "azerqds";
    char *base = "azertyuiop";
    char *ops = "qsdfghj";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 1, "The result was %d. Expected %d", i, 1);
}

Test(my_print_error, wrong_function_1)
{
    char *expr = "10+23+4";
    char *base = "012345789";
    char *ops = "()+-*/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}

Test(my_print_error, wrong_function_2)
{
    char *expr = "*10+23+4";
    char *base = "012345789";
    char *ops = "()+-*/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}

Test(my_print_error, wrong_function_3)
{
    char *expr = "10+23+4a";
    char *base = "0123456789";
    char *ops = "()+-*/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}

Test(my_print_error, wrong_function_4)
{
    char *expr = "10+23+4";
    char *base = "0123456789";
    char *ops = "()+-/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}

Test(my_print_error, wrong_function_5)
{
    char *expr = "(10+23+4";
    char *base = "0123456789";
    char *ops = "()+-*/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}

Test(my_print_error, wrong_function_6)
{
    char *expr = "10+23+4";
    char *base = "0123456789";
    char *ops = "()+-*9%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}

Test(my_print_error, wrong_function_7)
{
    char *expr = "10+-23+4";
    char *base = "0123456789";
    char *ops = "()+-*9%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}

Test(my_print_error, wrong_function_8)
{
    char *expr = "10+23+4*";
    char *base = "012345789";
    char *ops = "()+-*/%";

    int i = my_print_error(base, ops, expr);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
}