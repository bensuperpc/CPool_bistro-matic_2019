/*
** EPITECH PROJECT, 2019
** infin_div.c
** File description:
** infinite division
*/

#include "my.h"

char *infin_add(char *str1, char *str2);

char *infin_div(char *op1, char *op2)
{
    unsigned long long i = 0;
    int neg[2] = {(op1[0] == '-' ? 1 : 0), (op2[0] == '-' ? 1 : 0)};
    char *op1s = my_strdup(op1 + (neg[0] == 1 ? 1 : 0));
    char *op2s = my_strdup(op2 + (neg[1] == 1 ? 1 : 0));
    if (my_strcmp(op1s, "0") == 0)
        return (my_strdup("0"));
    my_revstr_pt(&op1s);
    my_revstr_pt(&op2s);
    if (my_str_compare_inv(op1s, op2s) == 2)
        return (my_strdup("0"));
    my_revstr_pt(&op1s);
    my_revstr_pt(&op2s);
    op2s = my_strcat_dup("-", op2s);
    while (op1s[0] != '-') {
        op1s = infin_add(op1s, op2s);
        i++; }
    i--;
    if ((neg[0] == 1 && neg[1] == 0) || (neg[0] == 0 && neg[1] == 1))
        i *= -1;
    return (my_int_to_str(i));
}
