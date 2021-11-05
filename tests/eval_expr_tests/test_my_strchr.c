/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** test_my_strchr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(test_my_strchr, simple)
{
    char *insert_s = " ";
    char *s = "Bonjour, 23h42";
    char *t = my_str_ins(s, insert_s, 9);
    cr_assert_eq(my_strchr(t, 'o'), 1, "The result was %d. Expected %d",
        my_strrchr(t, 'o'), 1);
}

Test(test_my_strchr, simple_complex_1)
{
    char *str = "5 * (585 * 586 + (448 * 6 + 5)) + 5 ";

    cr_assert_eq(my_strchr(str, ')'), 29, "The result was %d. Expected %d",
        my_strchr(str, ')'), 29);
}

Test(test_my_strchr, simple_complex_2)
{
    char *str = "5 * (585 * 586 + (448 * 6 + 5)) + 5 ";

    cr_assert_eq(my_strchr(str, '('), 4, "The result was %d. Expected %d",
        my_strchr(str, '('), 4);
}

Test(test_my_strchr, error_1)
{
    char *str = "5 * (585 * 586 + (448 * 6 + 5)) + 5 ";

    cr_assert_eq(my_strchr(str, 'o'), -1, "The result was %d. Expected %d",
        my_strchr(str, 'o'), -1);
}

Test(test_my_strchr, error_2_empty)
{
    char *str = "";

    cr_assert_eq(my_strchr(str, 'o'), -1, "The result was %d. Expected %d",
        my_strchr(str, 'o'), -1);
}

Test(test_my_strchr, error_3)
{
    char *str = " ";

    cr_assert_eq(my_strchr(str, 'o'), -1, "The result was %d. Expected %d",
        my_strchr(str, 'o'), -1);
}
