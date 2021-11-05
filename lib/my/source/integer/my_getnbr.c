/*
** EPITECH PROJECT, 2019
** epitech-c-cpp-headers.addHeader
** File description:
** >my_getnbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    long int i = 0;
    int negative = my_count_spe_char(str, '-');
    i = ext_func(str);
    if (i >= 2147483648 && negative % 2 == 0)
        return (0);
    if (negative % 2 == 1)
        i *= -1;
    return i;
}

long int ext_func(char const *str)
{
    int y = 0;
    long int i = 0;
    while (y <= my_strlen(str) - 1) {
        if ((str[y] >= 48 && str[y] <= 57)) {
            if (i * 10 + (str[y] - 48) > 2147483648)
                return (0);
            i = i * 10 + (str[y] - 48);
        } else {
            if (i > 0 || i < 0)
                y = my_strlen(str) - 1;
        }
        y++;
    }
    return i;
}
