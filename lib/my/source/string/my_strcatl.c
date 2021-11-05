/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** >my_str_assembly
*/

#include "my.h"

char *my_strcatl(char *str, char *insert_str)
{
    if (str == NULL || insert_str == NULL)
        return (0);
    int size[] = {my_strlen(str), my_strlen(insert_str)};
    char *temps_str;
    temps_str = malloc(sizeof(char) * size[0]);
    my_strcpy(temps_str, str);
    str = malloc(sizeof(char) * size[0] + size[1] + 1);
    for (int i = 0; temps_str[i] != '\0'; i++)
        str[i] = temps_str[i];
    free(temps_str);
    for (int i = 0; insert_str[i] != '\0'; i++)
        str[size[0] + i] = insert_str[i];
    str[size[0] + size[1]] = '\0';
    return str;
}
