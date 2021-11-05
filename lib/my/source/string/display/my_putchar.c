/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_putchar
*/

#include "my.h"

int my_putchar(char c)
{
    return (write(1, &c, 1));
}
