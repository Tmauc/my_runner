/*
** EPITECH PROJECT, 2017
** background3
** File description:
** background3
*/

#include "my.h"

void background3setup(files *fi)
{
	fi->background3.B3texture =
	sfTexture_createFromFile("sprite/background/platform.png", NULL);
	fi->background3.B3sprite = sfSprite_create();
}

void timebackground3(files *fi)
{
	if (fi->time.seconds > 0.001) {
		if (fi->b3square.left == 1544)
			fi->b3square.left = 0;
		else
			fi->b3square.left = fi->b3square.left + 4;
		sfSprite_setTextureRect(fi->background3.B3sprite, fi->b3square);
	}
}
