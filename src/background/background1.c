/*
** EPITECH PROJECT, 2017
** background1
** File description:
** background1
*/

#include "my.h"

void background1setup(files *fi)
{
	fi->background1.B1texture =
	sfTexture_createFromFile("sprite/background/background1.png", NULL);
	fi->background1.B1sprite = sfSprite_create();
}

void timebackground1(files *fi)
{
	if (fi->time.seconds > 0.1) {
		if (fi->b1square.left == 1810)
			fi->b1square.left = 0;
		else
			fi->b1square.left = fi->b1square.left + 1;
		sfSprite_setTextureRect(fi->background1.B1sprite, fi->b1square);
	}
}
