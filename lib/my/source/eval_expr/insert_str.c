/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** insert_str.c
*/

#include "my.h"

char *write_str(char *str, char *newstr, int i, int arg)
{
    int k = 0;
    int len = my_strlen(str);

    if (arg == 0) {
        while (k <= i) {
            newstr[k] = str[k];
            k++;
        }
    } else if (arg == 1) {
        while (i < len) {
            newstr[k] = str[i];
            i++;
            k++;
        }
    }
    newstr[k] = '\0';
    return (newstr);
}
