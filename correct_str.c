/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** >correct_str
*/

#include "my.h"

char *correct_str(char *str);

int my_char_isnum(char c);

int my_char_isnum(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

char *correct_str(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (my_char_isnum(str[i]) && str[i + 1] == '(')
            str = my_str_ins(str, "*", i + 1);
        if (str[i] == ')' && str[i + 1] == '(')
            str = my_str_ins(str, "*", i + 1);
        if (str[i] == ')' && my_char_isnum(str[i + 1]))
            str = my_str_ins(str, "*", i + 1);
        i++;
    }
    return (str);
}
