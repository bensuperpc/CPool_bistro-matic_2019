/*
** EPITECH PROJECT, 2019
** check_parenthesis.c
** File description:
** check number of parenthesis in expr
*/

int check_parenthesis(char *str)
{
    int i;
    int j = 0;
    int y = 0;

    for (i = 0; str[i]; i++) {
        if (str[i] == '(')
            j++;
        if (str[i] == ')')
            y++;
    }
    if (j != y)
        return (0);
    return (1);
}