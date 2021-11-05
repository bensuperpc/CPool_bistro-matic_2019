/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_put_nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int resultmod;
    if (nb != -2147483648) {
        if (nb < 0) {
            my_putchar('-');
            nb = nb * (-1);
        }
        if (nb >= 10) {
            resultmod = (nb % 10);
            nb = (nb - resultmod) / 10;
            my_put_nbr(nb);
            my_putchar('0' + resultmod);
        } else
            my_putchar('0' + nb % 10);
    } else {
        my_putstr("-2147483648");
    }
    return (0);
}
