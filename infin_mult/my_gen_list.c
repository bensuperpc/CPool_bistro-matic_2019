/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_gen_list.c
*/

#include "my.h"

void my_gen_list(char **str, char c, long long size);

void my_gen_list(char **str, char c, long long size)
{
    long long sizet = my_strllen(str[0]);
    
    for (; sizet < size; sizet++) {
        str[0][sizet] = c;
    }
    str[0][sizet] = '\0';
}
