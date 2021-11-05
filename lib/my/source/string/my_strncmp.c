/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strcmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    while (*s2 != '\0' && *s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
        n--;
    }
    if (*s1 == *s2 || n == 0)
        return 0;
    if (*s1 != *s2)
        return *s1 - *s2;
    return (0);
}
