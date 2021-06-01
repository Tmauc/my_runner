/*
** EPITECH PROJECT, 2017
** score
** File description:
** score
*/

#include "my.h"

void scoresetup(files *fi)
{
	fi->score.co = 0;
	fi->score.Stexture =
	sfTexture_createFromFile("sprite/score/score.png", NULL);
	fi->score.Ssprite = sfSprite_create();
	fi->score.S2sprite = sfSprite_create();
	fi->score.S3sprite = sfSprite_create();
	fi->score.S4sprite = sfSprite_create();
	fi->score.S5sprite = sfSprite_create();
}

void spriteset_score(files *fi)
{
	sfSprite_setTexture(fi->score.Ssprite, fi->score.Stexture, sfTrue);
	sfSprite_setPosition(fi->score.Ssprite, fi->score.ssquare2);
	sfSprite_setTexture(fi->score.S2sprite, fi->score.Stexture, sfTrue);
	sfSprite_setPosition(fi->score.S2sprite, fi->score.s2square2);
	sfSprite_setTexture(fi->score.S3sprite, fi->score.Stexture, sfTrue);
	sfSprite_setPosition(fi->score.S3sprite, fi->score.s3square2);
	sfSprite_setTexture(fi->score.S4sprite, fi->score.Stexture, sfTrue);
	sfSprite_setPosition(fi->score.S4sprite, fi->score.s4square2);
	sfSprite_setTexture(fi->score.S5sprite, fi->score.Stexture, sfTrue);
	sfSprite_setPosition(fi->score.S5sprite, fi->score.s5square2);
}

void squaresetup_score2(files *fi)
{
	fi->s4square.left = 0;
	fi->s4square.top = 0;
	fi->s4square.width = 100;
	fi->s4square.height = 100;
	fi->s5square.left = 0;
	fi->s5square.top = 0;
	fi->s5square.width = 100;
	fi->s5square.height = 100;
	sfSprite_setTextureRect(fi->score.S4sprite, fi->s4square);
	sfSprite_setTextureRect(fi->score.S5sprite, fi->s5square);
}

void squaresetup_score(files *fi)
{
	fi->ssquare.left = 0;
	fi->ssquare.top = 0;
	fi->ssquare.width = 100;
	fi->ssquare.height = 100;
	fi->s2square.left = 0;
	fi->s2square.top = 0;
	fi->s2square.width = 100;
	fi->s2square.height = 100;
	fi->s3square.left = 0;
	fi->s3square.top = 0;
	fi->s3square.width = 100;
	fi->s3square.height = 100;
	sfSprite_setTextureRect(fi->score.Ssprite, fi->ssquare);
	sfSprite_setTextureRect(fi->score.S2sprite, fi->s2square);
	sfSprite_setTextureRect(fi->score.S3sprite, fi->s3square);
	squaresetup_score2(fi);
}
