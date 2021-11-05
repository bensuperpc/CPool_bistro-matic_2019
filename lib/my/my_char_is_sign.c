/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_char_is_sign.c
*/

#include "my.h"

int my_char_is_sign(char c)
{
    if (c == '-' || c == '+')
        return (1);
    else if (c == '*' || c == '/' || c == '%')
        return (2);
    return (0);
}
