/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_return_calculate_char.c
*/

#include "my.h"

char *return_calculate_char(char *str, int i, int num, int funct)
{
    char *begin = my_cut_str(str, i, 0);
    char *result = my_int_to_str(num);
    char *end = my_cut_str(str, i, 1);

    str = my_str_assembly(begin, result, end);
    return (str);
}