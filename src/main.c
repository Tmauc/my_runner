/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
	if (error(ac, av) != 0)
		return (84);
	else
		prog(av);
	av[1] = av[1] + 1;
	return (0);
}
