/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** >my_strrchr
*/

#include "my.h"

int my_strrchr(char const *str, char c)
{
    int li = -1;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            li = i;
    return (li);
}
