/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_make_process.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *make_process(char *str);

Test(make_process, simple_1)
{
    char *expr = "43+55";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "98", "The result was %s. Expected %s", res, "98");
}

Test(make_process, simple_2)
{
    char *expr = "-43+55";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "12", "The result was %s. Expected %s", res, "12");
}

Test(make_process, simple_3)
{
    char *expr = "43-55";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "-12", "The result was %s. Expected %s", res, "-12");
}

Test(make_process, simple_4)
{
    char *expr = "-43+-55";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "-98", "The result was %s. Expected %s", res, "-98");
}

Test(make_process, simple_5)
{
    char *expr = "4*5";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "20", "The result was %s. Expected %s", res, "20");
}

Test(make_process, simple_7)
{
    char *expr = "-43*-55";
    char *res = make_process(expr);

    cr_assert_str_eq(
        res, "2365", "The result was %s. Expected %s", res, "2365");
}

Test(make_process, simple_8)
{
    char *expr = "8/4";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "2", "The result was %s. Expected %s", res, "2");
}

Test(make_process, simple_9)
{
    char *expr = "8%3";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "0", "The result was %s. Expected %s", res, "0");
}

Test(make_process, complex_1)
{
    char *expr = "-43-55+12";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "-86", "The result was %s. Expected %s", res, "-86");
}

Test(make_process, complex_2)
{
    char *expr = "-43+-55+12";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "-86", "The result was %s. Expected %s", res, "-86");
}

Test(make_process, complex_3)
{
    char *expr = "1+2+3+4+5+6";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "21", "The result was %s. Expected %s", res, "21");
}

Test(make_process, complex_4)
{
    char *expr = "1+2-3+4+5-6";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "3", "The result was %s. Expected %s", res, "3");
}

Test(make_process, complex_5)
{
    char *expr = "4564756584+5876876874-46878980983+7687568894";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "-28749778631", "The result was %s. Expected %s", res,
        "-28749778631");
}

Test(make_process, complex_6)
{
    char *expr = "2*3+4+2*3+20";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "36", "The result was %s. Expected %s", res, "36");
}

Test(make_process, complex_7)
{
    char *expr = "2*3+4-2*3+20";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "24", "The result was %s. Expected %s", res, "24");
}

Test(make_process, complex_8)
{
    char *expr = "2*3+4-2*-3+20";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "36", "The result was %s. Expected %s", res, "36");
}

Test(make_process, complex_10)
{
    char *expr = "4/4+8/4";
    char *res = make_process(expr);

    cr_assert_str_eq(res, "3", "The result was %s. Expected %s", res, "3");
}
