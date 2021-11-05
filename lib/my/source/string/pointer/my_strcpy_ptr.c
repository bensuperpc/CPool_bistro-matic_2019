/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strcpy_ptr.c
*/

#include "my.h"

void my_strcpy_ptr(char **dest, char const *src)
{
    unsigned long long i = 0;

    while (src[i] != '\0') {
        dest[0][i] = src[i];
        i++;
    }
    dest[0][i] = '\0';
}
