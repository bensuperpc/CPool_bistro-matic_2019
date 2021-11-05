/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** >my_strnncpy
*/

#include "my.h"

char *my_strnncpy(char const *src, int b, int end)
{
    if (src == NULL)
        return "";
    char *dest = malloc(sizeof(char) * end + 1);
    int i = b;
    if (my_strlen(src) < b)
        return dest;
    if (b < 0 || end < 0)
        return dest;
    for (; i < b + end && src[i] != '\0'; i++)
        dest[i - b] = src[i];
    dest[i] = '\0';
    return dest;
}
