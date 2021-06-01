/*
** EPITECH PROJECT, 2017
** timecharacter
** File description:
** timecharacter
*/

#include "my.h"

void timecharacter(files *fi)
{
	if (fi->time.seconds > 0.1) {
		if (fi->square.left == 700)
			fi->square.left = 0;
		else
			fi->square.left = fi->square.left + 100;
		sfSprite_setTextureRect(fi->character.Csprite, fi->square);
		sfClock_restart(fi->time.clock);
	}
}

void timecharacterjump(files *fi)
{
	if (fi->time.seconds > 0.1) {
		if (fi->cjsquare.left == 300)
			fi->cjsquare.left = 0;
		else
			fi->cjsquare.left = fi->cjsquare.left + 100;
		sfSprite_setTextureRect(fi->character.CJsprite, fi->cjsquare);
		sfClock_restart(fi->time.clock);
	}
}
