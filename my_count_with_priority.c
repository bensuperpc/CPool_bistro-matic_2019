/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_count_with_priority.c
*/

#include "my.h"

int my_atol(char *str, int arg, int i);

char *infin_add(char *str1, char *str2);

char *infin_mult(char *str1, char *str2);

char *infin_add(char *str1, char *str2);

char *treat_str(char *str);

char *multiply_args(char *str);

char *add_args(char *str);

char *make_process(char *str);

char *infin_div(char *op1, char *op2);

char *infin_mod(char *op1, char *op2);

char *multiply_args(char *str)
{
    int num = 0;
    char **args;
    int i = 0;
    char *res;
    while (my_char_is_sign(str[i]) != 2 && str[i])
        i++;
    if (str[i] == '*') {
        args = my_return_args(args, str, i);
        res = infin_mult(args[0], args[1]);
        str = return_calculate_char_str(str, i, res, 2);
    } else if (str[i] == '/') {
        args = my_return_args(args, str, i);
        res = infin_div(args[0], args[1]);
        str = return_calculate_char_str(str, i, res, 2);
    } else if (str[i] == '%') {
        args = my_return_args(args, str, i);
        res = infin_mod(args[0], args[1]);
        str = return_calculate_char_str(str, i, res, 2);
    }
    return (str);
}

char *add_args(char *str)
{
    char **args;
    char *res;
    int i = 1;
    while (my_char_is_sign(str[i]) != 1 && str[i]) {
        i++;
    }
    args = my_return_args(args, str, i);
    res = infin_add(args[0], args[1]);
    str = return_calculate_char_str(str, i, res, 1);
    return (str);
}

int my_atol(char *str, int arg, int i)
{
    int num = 0;
    int j = 0;

    if (i == 0 && str[0] == '-' && arg == 0)
        return (0);
    i = my_move_i(arg, i);
    while (my_isnum(str[i]) && str[i]) {
        if (j == 0) {
            num = str[i] - '0';
            i = my_move_i(arg, i);
        } else if (arg == 1) {
            num = (num * 10) + (str[i] - '0');
            i = my_move_i(arg, i);
        } else {
            num = ((str[i] - '0') * (my_compute_power_rec(10, j))) + num;
            i = my_move_i(arg, i);
        }
        j++;
    }
    return (num);
}

char *make_process(char *str)
{
    for (int j = 0; str[j]; j++) {
        if (my_char_is_sign(str[j]) == 2) {
            str = multiply_args(str);
            j = 0;
        }
    }
    for (int k = 0; str[k]; k++) {
        if (my_char_is_sign(str[k]) == 1) {
            str = add_args(str);
            k = 0;
        }
    }
    return (str);
}

char *treat_str(char *str)
{
    int h = 1;
    int k = 0;

    while (str[h]) {
        if (my_char_is_sign(str[h]) != 0) {
            k = k + 1;
        }
        h++;
    }
    if (k == 0)
        return (str);
    str = make_process(str);
    return (str);
}
