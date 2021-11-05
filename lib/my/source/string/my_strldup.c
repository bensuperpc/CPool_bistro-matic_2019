/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** >my_strldup
*/

#include "my.h"

char *my_strldup(char const *src)
{
    char *str = NULL;
    str = (char *)malloc(sizeof(char) * (my_strllen(src) + 1));
    str = my_strcpy(str, src);
    return str;
}
