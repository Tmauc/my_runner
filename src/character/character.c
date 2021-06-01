/*
** EPITECH PROJECT, 2017
** character
** File description:
** character
*/

#include "my.h"

void charactersetup2(files *fi)
{
	fi->character.character_down = 0;
	fi->character.anime = 0;
	fi->character.attack = 0;
	fi->character.dodge = 0;
	fi->character.pos_x = 8;
	fi->character.pos_clock = 0;
	fi->character.pos_character = 800;
}

void charactersetup(files *fi)
{
	charactersetup2(fi);
	fi->character.Ctexture =
	sfTexture_createFromFile("sprite/character/character.png", NULL);
	fi->character.Csprite = sfSprite_create();
	fi->character.Dtexture =
	sfTexture_createFromFile("sprite/character/characterdodge.png", NULL);
	fi->character.Dsprite = sfSprite_create();
	fi->character.CJtexture =
	sfTexture_createFromFile("sprite/character/characterjump2.png", NULL);
	fi->character.CJsprite = sfSprite_create();
	fi->character.CFtexture =
	sfTexture_createFromFile("sprite/character/characterfall.png", NULL);
	fi->character.CFsprite = sfSprite_create();
	fi->character.CAtexture =
	sfTexture_createFromFile("sprite/character/characterattack.png", NULL);
	fi->character.CAsprite = sfSprite_create();
}

void spriteset_character(files *fi)
{
	sfSprite_setTexture(fi->character.Csprite,
	fi->character.Ctexture, sfTrue);
	sfSprite_setPosition(fi->character.Csprite, fi->character.square2);
	sfSprite_setTexture(fi->character.Dsprite,
	fi->character.Dtexture, sfTrue);
	sfSprite_setPosition(fi->character.Dsprite, fi->character.dsquare2);
	sfSprite_scale(fi->character.Dsprite, fi->character.invers2);
	sfSprite_setTexture(fi->character.CJsprite,
	fi->character.CJtexture, sfTrue);
	sfSprite_setPosition(fi->character.CJsprite, fi->character.cjsquare2);
	sfSprite_setTexture(fi->character.CFsprite,
	fi->character.CFtexture, sfTrue);
	sfSprite_setPosition(fi->character.CFsprite, fi->character.cfsquare2);
	sfSprite_scale(fi->character.CJsprite, fi->character.invers);
	sfSprite_setTexture(fi->character.CAsprite,
	fi->character.CAtexture, sfTrue);
	sfSprite_setPosition(fi->character.CAsprite, fi->character.casquare2);
}

void squaresetup_character2(files *fi)
{
	fi->cjsquare.left = 0;
	fi->cjsquare.top = 0;
	fi->cjsquare.width = 100;
	fi->cjsquare.height = 120;
	fi->casquare.left = 0;
	fi->casquare.top = 0;
	fi->casquare.width = 200;
	fi->casquare.height = 140;
	fi->dsquare.left = 0;
	fi->dsquare.top = 0;
	fi->dsquare.width = 220;
	fi->dsquare.height = 320;
}

void squaresetup_character(files *fi)
{
	fi->square.left = 0;
	fi->square.top = 0;
	fi->square.width = 100;
	fi->square.height = 100;
	fi->cfsquare.left = 0;
	fi->cfsquare.top = 0;
	fi->cfsquare.width = 200;
	fi->cfsquare.height = 200;
	squaresetup_character2(fi);
	sfSprite_setTextureRect(fi->character.Csprite, fi->square);
	sfSprite_setTextureRect(fi->character.CJsprite, fi->cjsquare);
	sfSprite_setTextureRect(fi->character.CFsprite, fi->cfsquare);
	sfSprite_setTextureRect(fi->character.CAsprite, fi->casquare);
	sfSprite_setTextureRect(fi->character.Dsprite, fi->dsquare);
}
