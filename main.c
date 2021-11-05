/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** main.c
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "bistromatic.h"
#include "my.h"

void my_putstr(char const *);

int my_strlen(char const *);

int my_atoi(char *const str);

static char *get_expr(unsigned int size);

int my_atoi(char *const str)
{
    unsigned int num = 0;
    int j = 0;

    while (my_isnum(str[j]) && str[j]) {
        if (j == 0) {
            num = str[j] - '0';
            j++;
        } else {
            num = (num * 10) + (str[j] - '0');
            j++;
        }
    }
    return (num);
}

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    my_putstr(eval_expr(av[1], av[2], expr, size));
    return (EXIT_SUCCESS);
}
