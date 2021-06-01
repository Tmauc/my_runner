/*
** EPITECH PROJECT, 2017
** menusetup
** File description:
** menusetup
*/

#include "my.h"

void menusetup(files *fi)
{
	fi->menu.Mtexture =
	sfTexture_createFromFile("sprite/menu/menu.png", NULL);
	fi->menu.Msprite = sfSprite_create();
}

void menupausesetup(files *fi)
{
	fi->menupause.Mptexture =
	sfTexture_createFromFile("sprite/menu/menupause.png", NULL);
	fi->menupause.Mpsprite = sfSprite_create();
}

void spriteset_menu(files *fi)
{
	sfSprite_setTexture(fi->menu.Msprite, fi->menu.Mtexture, sfTrue);
	sfSprite_setPosition(fi->menu.Msprite, fi->menu.msquare2);
	sfSprite_setTexture(fi->menupause.Mpsprite,
	fi->menupause.Mptexture, sfTrue);
	sfSprite_setPosition(fi->menupause.Mpsprite, fi->menupause.mpsquare2);
}

void squaresetup_menu(files *fi)
{
	fi->msquare.left = 0;
	fi->msquare.top = 0;
	fi->msquare.width = 1920;
	fi->msquare.height = 1080;
	fi->mpsquare.left = 0;
	fi->mpsquare.top = 0;
	fi->mpsquare.width = 1920;
	fi->mpsquare.height = 1080;
	sfSprite_setTextureRect(fi->menu.Msprite, fi->msquare);
	sfSprite_setTextureRect(fi->menupause.Mpsprite, fi->mpsquare);
}
