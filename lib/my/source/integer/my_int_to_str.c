/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_int_to_str.c
*/

#include "my.h"

char *my_int_neg_to_str(int num)
{
    int i = 0;
    char *str = "";
    int bis = num * (-1);
    num = num * (-1);
    for (; num > 9; i++)
        num = num / 10;
    str = malloc(sizeof(char) * i + 2);
    str[i + 2] = '\0';
    while (i > 0) {
        str[i + 1] = ((bis % 10) + '0');
        bis = bis / 10;
        i--;
    }
    str[1] = bis + '0';
    str[0] = '-';
    return (str);
}

char *my_int_to_str(int num)
{
    int i = 0;
    char *str;
    int bis = num;
    if (num == 0)
        return (my_strdup("0"));
    if (bis < 0) {
        str = my_int_neg_to_str(bis);
        return (str);
    }
    for (; num > 9; i++)
        num = num / 10;
    str = malloc(sizeof(char) * i + 1);
    str[i + 1] = '\0';
    while (i > 0) {
        str[i] = ((bis % 10) + '0');
        bis = bis / 10;
        i--;
    }
    str[0] = bis + '0';
    return (str);
}
