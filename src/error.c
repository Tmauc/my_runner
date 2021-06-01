/*
** EPITECH PROJECT, 2017
** error
** File description:
** error
*/

#include "my.h"

int error(int ac, char **av)
{
	help he;
	if (ac == 1)
		return (1);
	else if (ac == 2)  {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			help2(&he);
			return (1);
		} else if (open(av[1], O_RDONLY) == -1 ||
		open(av[1], O_DIRECTORY) != -1)
			return (1);
		else
			return (0);
	} else
		return (84);
}
