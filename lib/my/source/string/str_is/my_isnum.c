/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_isnum.c
*/

#include "my.h"

int my_isnum(char c)
{
    if (c == '\0')
        return (0);
    if (c < '0' || c > '9')
        return (0);
    return (1);
}
