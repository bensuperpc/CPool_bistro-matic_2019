/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_find_base_error.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

int find_base_error(char *str, int arg);

Test(find_base_error, simple_1)
{
    char *str = "0123456789";
    char *sr = "()+-*/m";
    int i = find_base_error(str, 0);
    int j = find_base_error(sr, 1);

    cr_assert_eq(i, 1, "The result was %d. Expected %d", i, 1);
    cr_assert_eq(j, 1, "The result was %d. Expected %d", j, 1);
}

Test(find_base_error, error_1)
{
    char *str = "012a3456789";
    char *st = "0122456789";
    char *sr = "()+-*y/m";
    char *tr = "()+-//m";
    int i = find_base_error(str, 0);
    int j = find_base_error(sr, 1);
    int k = find_base_error(str, 0);
    int l = find_base_error(sr, 1);

    cr_assert_eq(i, 0, "The result was %d. Expected %d", i, 0);
    cr_assert_eq(j, 0, "The result was %d. Expected %d", j, 0);
    cr_assert_eq(k, 0, "The result was %d. Expected %d", k, 0);
    cr_assert_eq(l, 0, "The result was %d. Expected %d", l, 0);
}