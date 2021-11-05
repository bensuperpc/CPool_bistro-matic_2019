/*
** EPITECH PROJECT, 2019
** epitech-c-cpp-headers.addHeader
** File description:
** >concat_params
*/

#include "my.h"

char *concat_params(int argc, char **argv)
{
    char *str = NULL;
    str = (char *)malloc(argc * sizeof(char));
    int i = 0;
    while (i < argc) {
        my_strcat(str, argv[i]);
        my_strcat(str, "\n");
        i++;
    }
    return (str);
}
