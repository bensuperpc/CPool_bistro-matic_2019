/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_change_expr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *change_expr(const char *expr, const char *base, const char *ops, int arg);

Test(change_expr, simple_1)
{
    char *expr = "abcdefghij";
    char *base = "abcdefghij";
    char *ops = "t";
    char *res = change_expr(expr, base, ops, 0);

    cr_assert_str_eq(
        res, "0123456789", "The result was %d. Expected %d", res, "0123456789");
}

Test(change_expr, complexe_1)
{
    char *expr = "atgpojy,nutre/";
    char *base = "arojuctgpe";
    char *ops = "/,ynwsq";
    char *res = change_expr(expr, base, ops, 0);

    cr_assert_str_eq(res, "067823+)-4619(", "The result was %s. Expected %s",
        res, "067823+)-4619(");
}

Test(change_expr, modulo_1)
{
    char *expr = "yui";
    char *base = "yiopmlkjhg";
    char *ops = "aqswxcu";
    char *res = change_expr(expr, base, ops, 0);

    cr_assert_str_eq(res, "0%1", "The result was %s. Expected %s", res, "0%1");
}

Test(change_expr, simple_2_rev)
{
    char *expr = "0123456789";
    char *base = "abcdefghij";
    char *ops = "t";
    char *res = change_expr(expr, base, ops, 1);

    cr_assert_str_eq(
        res, "abcdefghij", "The result was %d. Expected %d", res, "abcdefghij");
}

Test(change_expr, complexe_2_rev)
{
    char *expr = "067823+)-4619(";
    char *base = "arojuctgpe";
    char *ops = "/,ynwsq";
    char *res = change_expr(expr, base, ops, 1);

    cr_assert_str_eq(res, "atgpojy,nutre/", "The result was %s. Expected %s",
        res, "067823+)-4619(");
}
