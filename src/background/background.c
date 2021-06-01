/*
** EPITECH PROJECT, 2017
** background
** File description:
** background
*/

#include "my.h"

void backgroundsetup(files *fi)
{
	fi->background.Bgtexture =
	sfTexture_createFromFile("sprite/background/background.jpg", NULL);
	fi->background.Bgsprite = sfSprite_create();
}

void spriteset_background(files *fi)
{
	sfSprite_setTexture(fi->background1.B1sprite,
	fi->background1.B1texture, sfTrue);
	sfSprite_setPosition(fi->background1.B1sprite,
	fi->background1.b1square2);
	sfSprite_setTexture(fi->background2.B2sprite,
	fi->background2.B2texture, sfTrue);
	sfSprite_setPosition(fi->background2.B2sprite,
	fi->background2.b2square2);
	sfSprite_setTexture(fi->background3.B3sprite,
	fi->background3.B3texture, sfTrue);
	sfSprite_setPosition(fi->background3.B3sprite,
	fi->background3.b3square2);
	sfSprite_setTexture(fi->background.Bgsprite,
	fi->background.Bgtexture, sfTrue);
}

void squaresetup_background(files *fi)
{
	fi->b1square.left = 0;
	fi->b1square.top = 0;
	fi->b1square.width = 1920;
	fi->b1square.height = 1080;
	fi->b2square.left = 0;
	fi->b2square.top = 0;
	fi->b2square.width = 1920;
	fi->b2square.height = 1080;
	fi->b3square.left = 0;
	fi->b3square.top = 0;
	fi->b3square.width = 1920;
	fi->b3square.height = 1080;
	sfSprite_setTextureRect(fi->background1.B1sprite, fi->b1square);
	sfSprite_setTextureRect(fi->background2.B2sprite, fi->b2square);
}

void setsquare2_background(files *fi)
{
	fi->background1.b1square2.x = 0;
	fi->background1.b1square2.y = 0;
	fi->background2.b2square2.x = 0;
	fi->background2.b2square2.y = 0;
	fi->background3.b3square2.x = 0;
	fi->background3.b3square2.y = -80;
}
