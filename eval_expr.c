/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** >main
*/

#include "bistromatic.h"
#include "my.h"

char *eval_expr(
    char const *base, char const *ops, char const *expr, unsigned int size);

char *correct_str(char *str);

char *treat_str(char *str);

char *eval_exprbis(char *str);

char *eval_exprbis(char *str)
{
    int i = 0;
    int x = 0;
    int y = 0;
    char *strs;

    while (my_strchr(str, ')') != -1 && my_strchr(str, '(') != -1) {
        y = my_strrchr(str, '(');
        x = my_strchr(str + y, ')');
        strs = my_strnncpy(str, y + 1, x - 1);
        str = my_strnncut(str, y, x);
        strs = treat_str(strs);
        str = my_str_ins(str, strs, y);
        i++;
    }
    return (treat_str(str));
}

char *eval_expr(
    char const *base, char const *ops, char const *expr, unsigned int size)
{
    int i = 0;
    char *str;

    if (my_print_error(base, ops, expr) == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_FIND_ERROR);
    }
    str = change_expr(expr, base, ops, 0);
    str = my_delete_sign(str);
    while (str[i]) {
        if (str[i] == '(' && str[i + 1] == '-')
            return (0);
        i++;
    }
    str = eval_exprbis(str);
    str = change_expr(str, base, ops, 1);
    return (str);
}
