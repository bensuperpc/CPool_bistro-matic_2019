/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** >my_strnncut
*/

#include "my.h"

char *my_strnncut(char *src, int b, int end)
{
    char *part = malloc(sizeof(char) * b + 1);
    char *dest = malloc(sizeof(char) * end + 1);
    part = my_strncpy(part, src, b);
    if (my_strlen(src) < b)
        return src;
    if (b < 0 || end < 0)
        return src;
    dest = my_strcat(part, src + b + end + 1);
    return dest;
}
