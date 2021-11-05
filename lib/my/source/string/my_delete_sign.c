/*
** EPITECH PROJECT, 2019
** my_delete_sign.c
** File description:
** delete operators at the beginning of a string
*/

#include "my.h"

char *my_delete_sign(char *str)
{
    int i;
    int len = my_strlen(str);
    int size;
    char *res;

    for (i = 0; my_char_is_sign(str[i]) == 1; i++)
        if (str[i - 1] == '-')
            i--;
    size = len - i;
    res = malloc(sizeof(char) * size + 1);
    res = &str[i];
    res[size + 1] == '\0';
    return (res);
}
