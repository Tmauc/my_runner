/*
** EPITECH PROJECT, 2017
** background2
** File description:
** background2
*/

#include "my.h"

void background2setup(files *fi)
{
	fi->background2.B2texture =
	sfTexture_createFromFile("sprite/background/background2.png", NULL);
	fi->background2.B2sprite = sfSprite_create();
}

void timebackground2(files *fi)
{
	if (fi->time.seconds > 0.013) {
		if (fi->b2square.left == 1495) {
			fi->b2square.left = 0;
		} else
			fi->b2square.left = fi->b2square.left + 1;
		sfSprite_setTextureRect(fi->background2.B2sprite, fi->b2square);
	}
}
