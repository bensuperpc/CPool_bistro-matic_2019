/*
** EPITECH PROJECT, 2019
** epitech-c-cpp-headers.addHeader
** File description:
** >my_putstr
*/

#include "my.h"

void my_putstr(char const *str)
{
    if (str == NULL)
        return;
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
