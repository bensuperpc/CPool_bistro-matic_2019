/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_str_islower
*/

#include "my.h"

int my_str_islower(char const *str)
{
    if (str[0] == '\0')
        return (1);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] <= 96 || str[i] >= 123)
            return (0);
        i++;
    }
    return (1);
}
