/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** test_my_returns_args.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char **my_return_args(char **args, char *str, int j);

Test(my_return_args, simple)
{
    char **args;
    char *str = "34+76";
    int j = 2;
    args = malloc(sizeof(char) * 1000);

    args = my_return_args(args, str, j);

    cr_assert_str_eq(
        args[0], "34", "The result was %s. Expected %s", args[0], "34");
    cr_assert_str_eq(
        args[1], "76", "The result was %s. Expected %s", args[1], "76");
}

Test(my_return_args, complex)
{
    char **args;
    char *str = "-34+-76";
    int j = 3;
    args = malloc(sizeof(char) * 1000);

    args = my_return_args(args, str, j);

    cr_assert_str_eq(
        args[0], "-34", "The result was %s. Expected %s", args[0], "-34");
    cr_assert_str_eq(
        args[1], "-76", "The result was %s. Expected %s", args[1], "-76");
}

Test(my_return_args, complex2)
{
    char **args;
    char *str = "-34--76";
    int j = 3;
    args = malloc(sizeof(char) * 1000);

    args = my_return_args(args, str, j);

    cr_assert_str_eq(
        args[0], "-34", "The result was %s. Expected %s", args[0], "-34");
    cr_assert_str_eq(
        args[1], "76", "The result was %s. Expected %s", args[1], "76");
}