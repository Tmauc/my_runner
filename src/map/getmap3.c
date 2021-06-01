/*
** EPITECH PROJECT, 2017
** getmap3
** File description:
** getmap3
*/

#include "my.h"

void new_str(struct stat a, files *fi)
{
	fi->tmp = malloc(sizeof(char) * a.st_size + 1);
	int i = 0;

	while (i < a.st_size) {
		fi->tmp[i] = ' ';
		i++;
	}
	fi->tmp[i] = '\0';
}
