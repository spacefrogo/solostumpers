/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** project
*/

#include "my.h"

int	my_puterror(char const *str)
{
    int k = 0;

    while (str[k] != '\0') {
        write(2, &str[k], 1);
        k++;
    }
    return (0);
}
