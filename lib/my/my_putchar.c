/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
