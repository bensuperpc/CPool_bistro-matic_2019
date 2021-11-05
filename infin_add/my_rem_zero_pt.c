/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_rem_zero_pt
*/

#include "my.h"

void my_rem_zero_pt(char **str);

void my_rem_zero_pt(char **str)
{
    char *tmp = my_strdup(str[0]);
    free(str[0]);
    int number = 0;
    long long i = 0;
    for (; tmp[i] != '\0' && number == 0; i++) {
        if (tmp[i] >= '1' && tmp[i] <= '9')
            number = 1;
        if (number == 0 && tmp[i + 1] == '\0')
            number = 1;
    }
    str[0] = my_strdup(tmp + i - 1);
    if (tmp[0] == '-' && my_strcmp(str[0], "0") != 0) {
        my_revstr_pt(&str[0]);
        my_strcat_ptr(&str[0], "-");
        my_revstr_pt(&str[0]);
    }
    free(tmp);
}
