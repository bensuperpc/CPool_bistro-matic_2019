/*
** EPITECH PROJECT, 2019
** compare_ops_base.c
** File description:
** compare input ops and base
*/

int check_in_base(char ops, char *base)
{
    int j = 0;

    for (j = 0; base[j]; j++) {
        if (ops == base[j])
            return (0);
    }
    return (1);
}

int compare_ops_base(char *ops, char *base)
{
    int i;

    for (i = 0; ops[i]; i++) {
        if (check_in_base(ops[i], base) == 0)
            return (0);
    }
    return (1);
}
