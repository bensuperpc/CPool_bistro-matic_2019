/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_sort_word_array
*/

#include "my.h"

int my_sort_word_array(char **tab)
{
    if (tab == NULL)
        return (0);
    int indexlen = 0;
    while (tab[indexlen] != 0)
        indexlen++;
    char *temps;
    for (int x = 0; x < indexlen - 1; x++)
        for (int y = 0; y < indexlen - 1; y++) {
            if (tab[y][0] > tab[x][0]) {
                temps = (char *)malloc(sizeof(char) * my_strlen(tab[x]));
                temps = tab[x];
                tab[x] = (char *)malloc(sizeof(char) * my_strlen(tab[y]));
                tab[x] = tab[y];
                tab[y] = (char *)malloc(sizeof(char) * my_strlen(temps));
                tab[y] = temps;
            }
        }
    return (0);
}
