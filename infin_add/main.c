/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >main
*/

#include "my.h"

char *infin_add(char *str1, char *str2);

int main(int argc, char **argv)
{
    if (argc == 3) {
        argv = argv + 1;
        char *str = infin_add(argv[0], argv[1]);
        my_putstr("Resultat :");
        my_putstr(str);
        my_putstr("\n");
        free(str);
    }
    return (0);
}
