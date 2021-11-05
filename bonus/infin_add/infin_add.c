/*
** EPITECH PROJECT, 2019
** bistro-matic_2019
** File description:
** >infin_add
*/

#include "my.h"

void my_add_zero_pt(char **str1, char **str2);

char *infin_add(char *str1, char *str2);

void infin_add_sub(char **str1, char **str2, int *neg);

void infin_add_sub_sub(char **str1, char **str2, int *neg);

void function_add_pos_up(char **str1, char **str2);

void function_sous_pos_up(char **str1, char **str2);

void my_rem_zero_pt(char **str);

char *infin_add(char *str1, char *str2)
{
    int neg[2] = {(str1[0] == '-' ? 1 : 0), (str2[0] == '-' ? 1 : 0)};
    char *str1s = my_strdup(str1 + (neg[0] == 1 ? 1 : 0));
    char *str2s = my_strdup(str2 + (neg[1] == 1 ? 1 : 0));
    my_revstr_pt(&str1s);
    my_revstr_pt(&str2s);
    my_add_zero_pt(&str1s, &str2s);
    infin_add_sub(&str1s, &str2s, neg);
    free(str2s);
    my_revstr_pt(&str1s);
    my_rem_zero_pt(&str1s);
    return (str1s);
}

void infin_add_sub(char **str1, char **str2, int *neg)
{
    if ((neg[0] == 0 && neg[1] == 0) || (neg[0] == 1 && neg[1] == 1))
        function_add_pos_up(&str1[0], &str2[0]);
    if (neg[0] == 1 && neg[1] == 1 && my_strcmp(str1[0], "00") != 0)
        my_strcat_ptr(&str1[0], "-");
    if (neg[0] == 0 && neg[1] == 1) {
        if (my_str_compare_inv(str1[0], str2[0]) == 0) {
            function_sous_pos_up(&str1[0], &str2[0]);
        } else if (my_str_compare_inv(str1[0], str2[0]) == 1) {
            function_sous_pos_up(&str1[0], &str2[0]);
        } else {
            my_inv_two_str_pt(&str1[0], &str2[0]);
            function_sous_pos_up(&str1[0], &str2[0]);
            my_strcat_ptr(&str1[0], "-");
        }
    }
    infin_add_sub_sub(&str1[0], &str2[0], neg);
}

void infin_add_sub_sub(char **str1, char **str2, int *neg)
{
    if (neg[0] == 1 && neg[1] == 0) {
        if (my_str_compare_inv(str1[0], str2[0]) == 0) {
            function_sous_pos_up(&str1[0], &str2[0]);
        } else if (my_str_compare_inv(str1[0], str2[0]) == 1) {
            function_sous_pos_up(&str1[0], &str2[0]);
            my_strcat_ptr(&str1[0], "-");
        } else {
            my_inv_two_str_pt(&str1[0], &str2[0]);
            function_sous_pos_up(&str1[0], &str2[0]);
        }
    }
}

void function_add_pos_up(char **str1, char **str2)
{
    int ret = 0;
    int tmp_res = 0;
    for (unsigned long long i = 0; str1[0][i] != '\0'; i++) {
        tmp_res = (str1[0][i] - 48) + (str2[0][i] - 48) + ret;
        ret = 0;
        if (tmp_res >= 10) {
            ret = 1;
            tmp_res -= 10;
        }
        str1[0][i] = tmp_res + 48;
        if (ret == 1 && str1[0][i] == '\0')
            str1[0][i + 1] = 1 + 48;
    }
}

void function_sous_pos_up(char **str1, char **str2)
{
    int ret = 0;
    int tmp_res = 0;
    for (int i = 0; str1[0][i] != '\0'; i++) {
        tmp_res = (str1[0][i] - 48) - (str2[0][i] - 48) + ret;
        ret = 0;
        if (tmp_res < 0) {
            ret = -1;
            tmp_res = 10 + tmp_res;
        }
        str1[0][i] = tmp_res + 48;
    }
}
