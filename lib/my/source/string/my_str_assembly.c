/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** >my_str_assembly
*/

#include "my.h"

char *my_str_assembly(char *str1, char *str2, char *str3);

char *my_str_assembly(char *str1, char *str2, char *str3)
{
    int i = my_strlen(str1);
    i = i + my_strlen(str2);
    i = i + my_strlen(str3);
    char *return_char = malloc(sizeof(char) * i + 1);
    return_char = my_strcatl(str1, str2);
    return_char = my_strcatl(return_char, str3);
    return (return_char);
}
