/*
** EPITECH PROJECT, 2017
** gravity
** File description:
** gravity
*/

#include "my.h"

int air(files *fi)
{
	if (fi->character.cjsquare2.y < fi->character.pos_character) {
		return (1);
	} else
		return (0);
}

void gravity2(files *fi)
{
	fi->character.character_down += 0.05;
	fi->character.cjsquare2.y +=
	fi->character.character_up + 2 *
	fi->character.character_down * fi->character.character_down;
	sfSprite_setTextureRect(fi->character.CJsprite, fi->cjsquare);
	sfSprite_setPosition(fi->character.CJsprite,
	fi->character.cjsquare2);
	sfClock_restart(fi->character.clock);
}

void gravity(files *fi)
{
	fi->character.tmp_ch = sfClock_getElapsedTime(fi->character.clock);
	fi->character.seconds_ch = fi->character.tmp_ch.microseconds / 100000.0;
	if (fi->character.seconds_ch > 0.0001 && air(fi) == 1) {
		gravity2(fi);
	} else if (air(fi) == 0 && fi->character.attack == 0 &&
	fi->character.dodge == 0) {
		fi->character.character_up = 0;
		fi->character.character_down = 0;
		fi->character.anime = 0;
		sfSound_stop(fi->character.sound_jump);
	}
	if (fi->character.cjsquare2.y > fi->character.pos_character) {
		fi->character.cjsquare2.y = fi->character.pos_character;
	}
}
