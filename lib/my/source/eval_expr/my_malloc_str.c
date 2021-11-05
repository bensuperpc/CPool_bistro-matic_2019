/*
** EPITECH PROJECT, 2019
** Eval_expr
** File description:
** >my_malloc_str
*/

#include "my.h"

char *my_malloc_str(char *str, int i, int arg, int len)
{
    if (arg == 1)
        str = malloc(sizeof(char) * len - i + 1);
    else
        str = malloc(sizeof(char) * i + 1);
    return (str);
}
