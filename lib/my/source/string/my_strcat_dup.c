/*
** EPITECH PROJECT, 2019
** my_strcat_dup.c
** File description:
** concat two string without need of my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat_dup(char *dest, char const *src)
{
    int len = my_strlen(dest) + my_strlen(src);
    char *res = malloc(sizeof(char) * len + 1);
    int i = 0;
    int j = 0;

    while (dest[i]) {
        res[i] = dest[i];
        i++;
    }
    while (src[j]) {
        res[i] = src[j];
        j++;
        i++;
    }
    res[i + 1] = '\0';
    return (res);
}
