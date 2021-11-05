/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strstr
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int size = 0;
    while (to_find[size] != '\0')
        size++;
    if (size == 0)
        return str;
    int x = 0;
    int y = 0;
    while (str[x] != '\0') {
        if (str[x] == to_find[y] && str[y] != '\0')
            y++;
        else
            y = 0;
        x++;
        if (size == y && str[y] != '\0')
            return (str + x - y + '\0');
    }
    return NULL;
}
