/*
** EPITECH PROJECT, 2017
** collision
** File description:
** collision
*/

#include "my.h"

int detect_end(files *fi, int j)
{
	if (fi->map.map[j][fi->character.pos_x] == 'E') {
		fi->character.pos_character = j * 90 - 100;
		if (fi->character.cjsquare2.y > fi->character.pos_character) {
			sfMusic_stop(fi->music);
			return (3);
		}
		detect_ok(fi);
		return (3);
	}
	return (4);
}

int detect_collision3(files *fi, int j)
{
	if (detect_rock3(fi, j) == 1)
		return (1);
	else if (detect_rock3(fi, j) == 0)
		return (0);
	if (detect_end(fi, j) == 3)
		return (3);
	return (4);
}

int detect_collision2(files *fi, int j)
{
	if (detect_air(fi, j) == 1 || detect_grasse(fi, j) == 1)
		return (1);
	else if (detect_grasse(fi, j) == 0)
		return (0);
	if (detect_rock2(fi, j) == 1)
		return (1);
	return (detect_collision3(fi, j));
}

int detect_collision(files *fi)
{
	int j = 0;
	int y = 0;
	int det = 2;

	while (y != fi->map.y) {
		det = detect_collision2(fi, j);
		if (det == 0 || det == 1 || det == 2 || det == 3)
			return (det);
		y++;
		j++;
	}
	fi->character.pos_character += 5;
	detect_ok(fi);
	return (1);
}
