/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_compute_power_rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p != 0)
        return (nb * my_compute_power_rec(nb, p - 1));
    else
        return 1;
}
