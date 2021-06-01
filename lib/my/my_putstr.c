/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
	my_putchar('\n');
	return (i);
}
