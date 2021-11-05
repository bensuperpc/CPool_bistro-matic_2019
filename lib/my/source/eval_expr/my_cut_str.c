/*
** EPITECH PROJECT, 2019
** Eval_expr
** File description:
** >my_cut_str
*/

#include "my.h"

char *my_cut_begin(char *str, int i, int len)
{
    char *begin;

    if (i == 0)
        return ("");
    i = my_move_i(0, i);
    while (my_isnum(str[i]) && str[i] && i >= 0) {
        i = my_move_i(0, i);
    }
    if (i == 0)
        return ("");
    begin = my_malloc_str(begin, i, 0, len);
    begin = write_str(str, begin, i, 0);
    return (begin);
}

char *my_cut_end(char *str, int i, int len)
{
    char *end;

    i = my_move_i(1, i);
    if (str[i] == '-')
        i++;
    while (my_isnum(str[i]) && str[i] && i >= 0) {
        i = my_move_i(1, i);
    }
    if (i >= len)
        return ("");
    end = my_malloc_str(end, i, 1, len);
    end = write_str(str, end, i, 1);
    return (end);
}

char *my_cut_str(char *str, int i, int arg)
{
    char *newstr = "";
    int len = my_strlen(str);
    if (arg == 0) {
        newstr = my_cut_begin(str, i, len);
    }
    if (arg == 1) {
        newstr = my_cut_end(str, i, len);
    }
    return (newstr);
}
