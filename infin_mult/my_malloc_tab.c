/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_malloc_tab
*/

#include "my.h"

char **my_malloc_tab(unsigned long long sizeh, unsigned long long sizel)
{
    char **tmp = malloc(sizeof(char *) * sizeh + 1);
    for (unsigned long long i = 0; i < sizeh; i++) {
        tmp[i] = malloc(sizeof(char) * sizel + 1);
    }
    return tmp;
}
