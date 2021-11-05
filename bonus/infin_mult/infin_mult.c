/*
** EPITECH PROJECT, 2019
** bistro-matic_2019
** File description:
** >infin_add
*/

#include "my.h"

void my_add_zero_pt(char **str1, char **str2);

char *infin_add(char *str1, char *str2);

void my_rem_zero_pt(char **str);

char **my_malloc_tab(unsigned long long sizeh, unsigned long long sizel);

void first_stage(char **str, char *s1, char *s2);

void second_stage(char **str, char *exp, char mult);

char *infin_add(char *str1, char *str2);

void adder_fn(char **str, char **tab, unsigned long long size);

void my_free_tab_ptr(char ***tab, unsigned long long size);

char *infin_mult(char *str1, char *str2)
{
    if (my_strcmp(str1, "0") == 0 || my_strcmp(str2, "0") == 0)
        return my_strdup("0");
    int neg[2] = {(str1[0] == '-' ? 1 : 0), (str2[0] == '-' ? 1 : 0)};
    char *s1 = my_strdup(str1 + (neg[0] == 1 ? 1 : 0));
    char *s2 = my_strdup(str2 + (neg[1] == 1 ? 1 : 0));
    unsigned long long size = my_strllen(s1) + my_strllen(s2) + 2;
    unsigned long long bsize = my_getbig_nbr(my_strllen(s1), my_strllen(s2));
    my_revstr_pt(&s1);
    my_revstr_pt(&s2);
    my_add_zero_pt(&s1, &s2);
    first_stage(&s1, s1, s2);
    my_revstr_pt(&s1);
    if ((neg[0] == 1 && neg[1] == 0) || (neg[0] == 0 && neg[1] == 1))
        my_strcat_ptr(&s1, "-");
    my_revstr_pt(&s1);
    my_rem_zero_pt(&s1);
    free(s2);
    return (s1);
}

void first_stage(char **str, char *s1, char *s2)
{
    unsigned long long size = my_strllen(s2);
    char **tmpc = my_malloc_tab(size, 0);
    unsigned long long i = 0;
    char *multi = my_strdup("");
    s1 = my_strdup(s1);
    for (; i < size; i++) {
        second_stage(&tmpc[i], s1, s2[i]);
        my_strcat_ptr(&tmpc[i], multi);
        my_strcat_ptr(&multi, "0");
    }
    adder_fn(&str[0], tmpc, size);
    my_free_tab_ptr(&tmpc, size);
    free(s1);
    free(multi);
}

void second_stage(char **str, char *exp, char mult)
{
    char *multi = my_strdup("");
    unsigned long long i = 0;
    unsigned long long size = my_strllen(exp);
    long long tmp = 0;
    char **tmpc = my_malloc_tab(size, 0);
    if (my_isnum(mult) == 0)
        return;
    for (; size > i; i++) {
        tmp = (mult - 48) * (exp[i] - 48);
        free(tmpc[i]);
        tmpc[i] = my_int_to_str(tmp);
        my_strcat_ptr(&tmpc[i], multi);
        my_strcat_ptr(&multi, "0");
    }
    adder_fn(&str[0], tmpc, size);
    my_free_tab_ptr(&tmpc, size);
    free(multi);
}

void adder_fn(char **str, char **tab, unsigned long long size)
{
    char *tmp = "0";
    char *tmps = my_strdup("0");
    unsigned long long i = 0;
    free(str[0]);
    for (; i < size; i++) {
        tmp = infin_add(tab[i], tmps);
        free(tmps);
        tmps = my_strdup(tmp);
        free(tmp);
    }
    str[0] = my_strdup(tmps);
    free(tmps);
}
