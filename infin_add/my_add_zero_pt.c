/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_add_zero_pt
*/

#include "my.h"

void my_gen_list(char **str, char c, long long size);

void my_add_zero_pt(char **str1, char **str2);

void my_add_zero_pt(char **str1, char **str2)
{
    char **tmp = malloc(sizeof(char *) * 2 + 1);
    tmp[0] = my_strdup(str1[0]);
    tmp[1] = my_strdup(str2[0]);
    unsigned long long size = (my_strllen(str1[0]) > my_strllen(str2[0]) ?
        my_strlen(str1[0]) : my_strlen(str2[0])) + 1;
    free(str1[0]);
    free(str2[0]);
    str1[0] = malloc(sizeof(char) * size + 1);
    str2[0] = malloc(sizeof(char) * size + 1);
    str1[0] = my_strcpy(str1[0], tmp[0]);
    str2[0] = my_strcpy(str2[0], tmp[1]);
    my_gen_list(&str1[0], '0', size);
    my_gen_list(&str2[0], '0', size);
    free(tmp[0]);
    free(tmp[1]);
    free(tmp);
}
