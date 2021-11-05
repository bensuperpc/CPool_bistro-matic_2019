/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_move_i.c
*/

#include "my.h"

int my_move_i(int arg, int i)
{
    if (arg == 1)
        i++;
    else
        i--;
    return i;
}