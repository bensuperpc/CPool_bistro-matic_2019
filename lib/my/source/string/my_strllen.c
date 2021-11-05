/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strllen
*/

#include "my.h"

unsigned long long my_strllen(char const *str)
{
    if (str == NULL)
        return (0);
    long long i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
