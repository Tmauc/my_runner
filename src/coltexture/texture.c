/*
** EPITECH PROJECT, 2017
** texture
** File description:
** texture
*/

#include "my.h"

void texturesetup(files *fi)
{
	fi->texture.Ttexture =
	sfTexture_createFromFile("sprite/texture/block_grasse.png", NULL);
	fi->texture.Tsprite = sfSprite_create();
	fi->texture.TDtexture =
	sfTexture_createFromFile("sprite/texture/block_dirt.png", NULL);
	fi->texture.TDsprite = sfSprite_create();
	fi->texture.R1texture =
	sfTexture_createFromFile("sprite/texture/block_rock1.png", NULL);
	fi->texture.R1sprite = sfSprite_create();
	fi->texture.R2texture =
	sfTexture_createFromFile("sprite/texture/block_rock2.png", NULL);
	fi->texture.R2sprite = sfSprite_create();
	fi->texture.R3texture =
	sfTexture_createFromFile("sprite/texture/block_rock3.png", NULL);
	fi->texture.R3sprite = sfSprite_create();
	fi->texture.Etexture =
	sfTexture_createFromFile("sprite/texture/block_end.png", NULL);
	fi->texture.Esprite = sfSprite_create();
}

void setsquare2_texture(files *fi)
{
	fi->texture.tsquare2.x = 0;
	fi->texture.tsquare2.y = 0;
	fi->texture.tdsquare2.x = 0;
	fi->texture.tdsquare2.y = 0;
	fi->texture.r1square2.x = 0;
	fi->texture.r1square2.y = 0;
	fi->texture.r2square2.x = 0;
	fi->texture.r2square2.y = 0;
	fi->texture.r3square2.x = 0;
	fi->texture.r3square2.y = 0;
	fi->texture.esquare2.x = 0;
	fi->texture.esquare2.y = 0;
}

void spriteset_texture(files *fi)
{
	sfSprite_setTexture(fi->texture.Tsprite,
	fi->texture.Ttexture, sfTrue);
	sfSprite_setPosition(fi->texture.Tsprite, fi->texture.tsquare2);
	sfSprite_setTexture(fi->texture.TDsprite,
	fi->texture.TDtexture, sfTrue);
	sfSprite_setPosition(fi->texture.TDsprite, fi->texture.tdsquare2);
	sfSprite_setTexture(fi->texture.R1sprite,
	fi->texture.R1texture, sfTrue);
	sfSprite_setPosition(fi->texture.R1sprite, fi->texture.r1square2);
	sfSprite_setTexture(fi->texture.R2sprite,
	fi->texture.R2texture, sfTrue);
	sfSprite_setPosition(fi->texture.R2sprite, fi->texture.r2square2);
	sfSprite_setTexture(fi->texture.R3sprite,
	fi->texture.R3texture, sfTrue);
	sfSprite_setPosition(fi->texture.R3sprite, fi->texture.r3square2);
	sfSprite_setTexture(fi->texture.Esprite,
	fi->texture.Etexture, sfTrue);
	sfSprite_setPosition(fi->texture.Esprite, fi->texture.esquare2);
}

void squaresetup_texture2(files *fi)
{
	fi->r2square.left = 0;
	fi->r2square.top = 0;
	fi->r2square.width = 90;
	fi->r2square.height = 90;
	fi->r3square.left = 0;
	fi->r3square.top = 0;
	fi->r3square.width = 90;
	fi->r3square.height = 90;
	fi->esquare.left = 0;
	fi->esquare.top = 0;
	fi->esquare.width = 90;
	fi->esquare.height = 90;
}

void squaresetup_texture(files *fi)
{
	fi->tsquare.left = 0;
	fi->tsquare.top = 0;
	fi->tsquare.width = 90;
	fi->tsquare.height = 90;
	fi->tdsquare.left = 0;
	fi->tdsquare.top = 0;
	fi->tdsquare.width = 90;
	fi->tdsquare.height = 90;
	fi->r1square.left = 0;
	fi->r1square.top = 0;
	fi->r1square.width = 90;
	fi->r1square.height = 90;
	squaresetup_texture2(fi);
}
