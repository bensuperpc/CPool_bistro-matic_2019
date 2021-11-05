/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strchr
*/

#include "my.h"

int my_strchr(char const *str, char c)
{
    if (str == NULL)
        return (-1);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return i;
    return (-1);
}
