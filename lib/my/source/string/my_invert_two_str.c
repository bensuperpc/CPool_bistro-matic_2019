/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_invert_two_str
*/

#include "my.h"

void my_invert_two_str(char *st1, char *st2)
{
    char *temps = my_strdup(st1);
    my_strcpy(temps, st1);
    st1 = my_strdup(st2);
    my_strcpy(st1, st2);
    st2 = my_strdup(temps);
    my_strcpy(st2, temps);
    free(temps);
}
