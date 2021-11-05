/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_str_compare
*/

#include "my.h"

int my_str_compare_inv(char *str1, char *str2)
{
    int strup = 0;
    for (unsigned long long i = 0; str1[i] != '\0'; i++) {
        if (str1[i] > str2[i])
            strup = 1;
        if (str1[i] < str2[i])
            strup = 2;
    }
    return (strup);
}
