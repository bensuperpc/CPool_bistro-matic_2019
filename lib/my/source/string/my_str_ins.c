/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** >my_str_ins
*/

#include "my.h"

char *my_str_ins(char *str, char *insert_str, int pos)
{
    char *str_ret = malloc(sizeof(char) * pos + 1);
    if (pos > my_strlen(str))
        return str;
    str_ret = my_strncpy(str_ret, str, pos);
    str_ret = my_strcat(str_ret, insert_str);
    str_ret = my_strcat(str_ret, str + pos);
    return str_ret;
}
