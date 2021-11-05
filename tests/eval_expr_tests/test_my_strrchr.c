/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** test_my_strrchr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(test_my_strrchr, simple)
{
    char *insert_s = " ";
    char *s = "Bonjour, 23h42";
    char *t = my_str_ins(s, insert_s, 9);
    cr_assert_eq(my_strrchr(t, 'o'), 4, "The result was %d. Expected %d",
        my_strrchr(t, 'o'), 4);
}

Test(test_my_strrchr, simple_complex_1)
{
    char *str = "5 * (585 * 586 + (448 * 6 + 5)) + 5 ";

    cr_assert_eq(my_strrchr(str, ')'), 30, "The result was %d. Expected %d",
        my_strrchr(str, ')'), 30);
}
Test(test_my_strrchr, simple_complex_2)
{
    char *str = "5 * (585 * 586 + (448 * 6 + 5)) + 5 ";

    cr_assert_eq(my_strrchr(str, '('), 17, "The result was %d. Expected %d",
        my_strrchr(str, '('), 17);
}

Test(test_my_strrchr, error_1)
{
    char *str = "5 * (585 * 586 + (448 * 6 + 5)) + 5 ";

    cr_assert_eq(my_strrchr(str, 'o'), -1, "The result was %d. Expected %d",
        my_strrchr(str, 'o'), -1);
}

Test(test_my_strrchr, error_2_empty)
{
    char *str = "";

    cr_assert_eq(my_strrchr(str, 'o'), -1, "The result was %d. Expected %d",
        my_strrchr(str, 'o'), -1);
}

Test(test_my_strrchr, error_3)
{
    char *str = " ";

    cr_assert_eq(my_strrchr(str, 'o'), -1, "The result was %d. Expected %d",
        my_strrchr(str, 'o'), -1);
}
