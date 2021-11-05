/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** check_div_nul.c
*/

int check_div_nul(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == '/' && str[i + 1] == '0')
            return (0);
        i++;
    }
    return (1);
}