/*
** EPITECH PROJECT, 2017
** draw
** File description:
** draw
*/

#include "my.h"

void drawscore(files *fi)
{
	if (fi->score.co >= 1)
		sfRenderWindow_drawSprite(fi->window, fi->score.S2sprite, NULL);
	if (fi->score.co >= 11)
		sfRenderWindow_drawSprite(fi->window, fi->score.S3sprite, NULL);
	if (fi->score.co >= 111)
		sfRenderWindow_drawSprite(fi->window, fi->score.S4sprite, NULL);
	if (fi->score.co >= 1111)
		sfRenderWindow_drawSprite(fi->window, fi->score.S5sprite, NULL);
}

void drawcharacter(files *fi)
{
	if (fi->character.anime == 0)
		sfRenderWindow_drawSprite(fi->window,
		fi->character.Csprite, NULL);
	if (fi->character.anime == 1)
		sfRenderWindow_drawSprite(fi->window,
		fi->character.CJsprite, NULL);
	if (fi->character.anime == 2)
		sfRenderWindow_drawSprite(fi->window,
		fi->character.CAsprite, NULL);
	if (fi->character.anime == 3)
		sfRenderWindow_drawSprite(fi->window,
		fi->character.Dsprite, NULL);
}

void draw(files *fi)
{
	sfRenderWindow_drawSprite(fi->window, fi->background.Bgsprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->background1.B1sprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->background2.B2sprite, NULL);
	affichage_map(fi);
	sfRenderWindow_drawSprite(fi->window, fi->score.Ssprite, NULL);
	drawscore(fi);
	drawcharacter(fi);
	sfRenderWindow_display(fi->window);
}
