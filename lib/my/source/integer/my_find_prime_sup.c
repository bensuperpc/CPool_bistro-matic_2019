/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_find_prime_sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb < 0)
        return (2);
    int i = nb;
    short int valuefound = 0;
    while (valuefound != 1) {
        if (my_is_prime(i) == 1) {
            return (i);
        }
        i++;
    }
    return (0);
}
