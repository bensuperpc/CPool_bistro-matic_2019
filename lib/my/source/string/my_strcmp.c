/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strcmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    while (*s2 != '\0' && *s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    if (*s1 == *s2)
        return (0);
    if (*s1 != *s2)
        return (*s1 - *s2);
    return (0);
}
