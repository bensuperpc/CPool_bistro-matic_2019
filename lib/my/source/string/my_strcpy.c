/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strcpy
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    unsigned long long i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
