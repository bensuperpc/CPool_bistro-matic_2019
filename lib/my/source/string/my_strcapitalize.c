/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_str_isupper
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    int i = 1;
    while (str[i] != '\0') {
        if (isalphas(str[i]) == 1 && isalphas(str[i - 1]) == 0
            && my_str_isnum(&str[i - 1]) == 0 && isupperalpha(str[i]) == 0) {
            str[i] = str[i] - 32;
        }
        if (isupperalpha(str[i]) == 1
            && (isupperalpha(str[i - 1]) == 1 || my_str_isnum(&str[i - 1]) == 1
                || isalphas(str[i - 1]))) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

int isalphas(char str)
{
    if (str >= 65 && str <= 122) {
        if (str >= 91 && str <= 96) {
            return (0);
        } else {
            return (1);
        }
    } else {
        return (0);
    }
    return (0);
}

int isupperalpha(char str)
{
    if (str >= 65 && str <= 90)
        return (1);
    else
        return (0);
}
