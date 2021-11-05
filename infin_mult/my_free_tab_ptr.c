/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_free_tab_ptr
*/

#include "my.h"

void my_free_tab_ptr(char ***tab, unsigned long long size)
{
    unsigned long long i = 0;
    for (; i < size; i++) {
        if (tab[0][i] != NULL) {
            free(tab[0][i]);
            tab[0][i] = NULL;
        }
    }
    free(tab[0]);
}
