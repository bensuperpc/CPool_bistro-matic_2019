/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >get_color
*/

#include "my.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int rgb = red;
    rgb = (rgb << 8) + green;
    rgb = (rgb << 8) + blue;
    return rgb;
}
