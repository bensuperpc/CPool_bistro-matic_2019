/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strcat_ptr
*/

#include "my.h"

void my_strcat_ptr(char **str, char *c)
{
    char *tmp = NULL;
    tmp = my_strdup(str[0]);
    free(str[0]);
    str[0] = malloc(sizeof(char) * (my_strllen(tmp) + my_strllen(c)) + 2);
    my_strcpy_ptr(&str[0], tmp);
    str[0] = my_strcat(str[0], c);
    free(tmp);
}
