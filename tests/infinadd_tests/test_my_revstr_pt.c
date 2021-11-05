/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_revstr_pt.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(my_revstr_pt, simple_1)
{
    char *str_res = my_strdup("50");
    char *str_exp = "05";
    my_revstr_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_revstr_pt, simple_2)
{
    char *str_res = my_strdup("9876543210");
    char *str_exp = "0123456789";
    my_revstr_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_revstr_pt, simple_3)
{
    char *str_res = my_strdup("ruojnoB");
    char *str_exp = "Bonjour";
    my_revstr_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_revstr_pt, empty)
{
    char *str_res = my_strdup("");
    char *str_exp = "";
    my_revstr_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_revstr_pt, huge_1)
{
    char *str_res
        = my_strdup(".9102 erbotco 13 el semmos suon ,30h02 tse li ,ruojnoB");
    char *str_exp = "Bonjour, il est 20h03, nous sommes le 31 octobre 2019.";
    my_revstr_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}

Test(my_revstr_pt, huge_2)
{
    char *str_res
        = my_strdup("Deux choses sont infinies : l'Univers et la betise "
                    "humaine. Mais, en ce qui concerne l'Univers, je n'en ai "
                    "pas encore acquis la certitude absolue.");
    char *str_exp = ".eulosba edutitrec al siuqca erocne sap ia ne'n ej "
                    ",srevinU'l enrecnoc iuq ec ne ,siaM .eniamuh esiteb al te "
                    "srevinU'l : seinifni tnos sesohc xueD";
    my_revstr_pt(&str_res);
    cr_assert_str_eq(
        str_res, str_exp, "The result was %s. Expected %s", str_res, str_exp);
    free(str_res);
}
