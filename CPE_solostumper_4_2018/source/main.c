/*
** EPITECH PROJECT, 2018
** solo
** File description:
** project
*/

#include "my.h"

void	do_this(int k, char *name)
{
    for (int a = 0; a <= k; a++) {
        if (name[a] == 'o' || name[a] == 'O')
            name[a] = '0';
        if (name[a] == 'i' || name[a] == 'I')
            name[a] = '1';
        if (name[a] == 'u' || name[a] == 'U')
            name[a] = '2';
        if (name[a] == 'e' || name[a] == 'E')
            name[a] = '3';
        if (name[a] == 'a' || name[a] == 'A')
            name[a] = '4';
        if (name[a] == 'y' || name[a] == 'Y')
            name[a] = '5';
    }
}

char	*my_geek_name_formatter(char *name)
{
    int k = my_strlen(name);
    int d = 1;

    for (int t = 0; t <= k; t++) {
        if (name[t] >= 97 && name[t] <= 122)
            name[t] = name[t] - 32;
    }
    for (int q = 0; q <= k; q++) {
        if (name[q + d] >= 65 && name[q+d] <= 97)
            name[q + d] = name[q+d] + 32;
        d++;
    }
    do_this(k, name);
    return (name);
}

int	main(int ac, char **av)
{
    if (ac != 2) {
        my_puterror("Usage: geekNameFormatter string\n");
        return (84);
    }
    char *ayy = my_geek_name_formatter(av[1]);
    my_putstr(ayy);
    my_putstr("\n");
}
