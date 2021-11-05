/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    long long size = 0;
    while (dest[size] != '\0')
        size++;

    long long i = 0;
    while (src[i] != '\0' && i < nb) {
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return dest;
}
