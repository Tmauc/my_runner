/*
** EPITECH PROJECT, 2017
** collision2
** File description:
** collision2
*/

#include "my.h"

void detect_ok(files *fi)
{
	if (fi->character.square2.y < fi->character.pos_character) {
		fi->character.square2.y += 5;
	} else
		fi->character.square2.y = fi->character.pos_character;
	sfSprite_setTextureRect(fi->character.Csprite, fi->square);
	sfSprite_setPosition(fi->character.Csprite,
	fi->character.square2);
}

int detect_grasse(files *fi, int j)
{
	if (fi->map.map[j][fi->character.pos_x] == '~') {
		fi->character.pos_character = j * 90 - 100;
		if (fi->character.cjsquare2.y > fi->character.pos_character) {
			sfMusic_stop(fi->music);
			return (0);
		}
		detect_ok(fi);
		return (1);
	}
	return (4);
}

int detect_air(files*fi, int j)
{
	if (fi->map.map[j][fi->character.pos_x] == '.' &&
	fi->map.map[j][fi->character.pos_x - 1] == '~') {
		if (fi->character.cjsquare2.y > fi->character.pos_character) {
			sfMusic_stop(fi->music);
			return (0);
		}
		detect_ok(fi);
		return (1);
	}
	return (4);
}

int detect_rock2(files *fi, int j)
{
	if (fi->map.map[j][fi->character.pos_x] == 'r') {
		fi->character.pos_character = j * 90 - 30;
		detect_ok(fi);
		return (1);
	}
	return (4);
}

int detect_rock3(files *fi, int j)
{
	if (fi->map.map[j][fi->character.pos_x] == 'R' ||
	fi->map.map[j][fi->character.pos_x] == 'O') {
		fi->character.pos_character = j * 90 - 90;
		if (fi->character.cjsquare2.y > fi->character.pos_character) {
			sfMusic_stop(fi->music);
			return (0);
		}
		detect_ok(fi);
		return (1);
	}
	return (4);
}
