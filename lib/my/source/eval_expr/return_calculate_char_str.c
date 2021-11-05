/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** return_calculate_char_str.c
*/

#include "my.h"

char *double_neg(char *begin, int len, char *beginbis, int i)
{
    int k = 0;
    while (i < len - 1)
    {
        beginbis[i] = begin[i];
        i++;
        k++;
    }
    beginbis[i] = '+';
    beginbis[i + 1] = '\0';
    return (beginbis);
}

char *neg_begin(char *begin, char *num)
{
    int len = my_strlen(begin);
    int i = 0;
    int k = 0;
    char *beginbis = malloc(sizeof(char) * 1000);

    if (begin[len - 1] == '-' && num[0] == '-')
    {
        while (i < len - 1)
        {
            beginbis[i] = begin[i];
            i++;
            k++;
        }
        beginbis[i] = '\0';
        return (beginbis);
    } else if (begin[len - 1] == '-' && num[0] != '-')
        return (double_neg(begin, len, beginbis, i));
    return (begin);
}

char *return_calculate_char_str(char *str, int i, char *num, int args)
{
    char *begin = my_cut_str(str, i, 0);
    if (args == 2)
        begin = neg_begin(begin, num);
    char *end = my_cut_str(str, i, 1);
    str = my_str_assembly(begin, num, end);
    return (str);
}
