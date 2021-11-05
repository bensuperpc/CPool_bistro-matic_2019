/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_swap
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int *temps = 0;
    temps = a;
    a = b;
    b = temps;
}
