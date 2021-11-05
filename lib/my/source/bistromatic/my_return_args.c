/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_return_args.c
*/

#include "my.h"

char **put_on_args1(char **args, char *str, int i, int k)
{
    while (str[i] && my_char_is_sign(str[i]) == 0) {
        args[1][k] = str[i];
        i++;
        k++;
    }
    return (args);
}

int find_i(char *str, int j)
{
    int i = j;
    while (str[i] && my_char_is_sign(str[i - 1]) == 0) {
        i--;
    }
    if (j == 1)
        i = 0;
    return (i);
}

char **write_first_mult(char **args, char *str, int j)
{
    int i = find_i(str, j);
    int k = 0;

    if (str[i - 1] == '-') {
        args[0][0] = '-';
        k++;
        while (i < j) {
            args[0][k] = str[i];
            k++;
            i++;
        }
    }
    while (i < j) {
        args[0][k] = str[i];
        k++;
        i++;
    }
    args[0][k] = '\0';
    return (args);
}

char **write_second_arg(char **args, char *str, int j)
{
    int i = j + 1;
    int k = 0;

    if ((str[j] == '+' && str[i] == '-') || (str[j] == '*' && str[i] == '-')) {
        args[1][k] = '-';
        i++;
        k++;
    }
    if (str[j] == '-' && str[j + 1] != '-') {
        args[1][k] = '-';
        k++;
    }
    if ((str[j] == '-' && str[j + 1] == '-')) {
        i++;
    }
    args = put_on_args1(args, str, i, k);
    return (args);
}

char **my_return_args(char **args, char *str, int j)
{
    int len = my_strlen(str);
    int i = (find_first_num(str, j));

    args = malloc(sizeof(char) * (len + 10));
    args[0] = malloc(sizeof(char) * (i + 2));
    args[1] = malloc(sizeof(char) * (len - j) + 2);
    args = write_second_arg(args, str, j);
    if (my_char_is_sign(str[i]) == 2)
        args = write_first_mult(args, str, j);
    else
        args = write_first_arg(args, str, j);
    return (args);
}
