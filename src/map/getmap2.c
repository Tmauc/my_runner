/*
** EPITECH PROJECT, 2017
** getmap2
** File description:
** getmap2
*/

#include "my.h"

void getx(files *fi)
{
	if (fi->map.X < fi->map.x)
		fi->map.X = fi->map.x;
}

void prog_map(files *fi)
{
	int i = 0;
	int j = 0;
	int y = 0;

	while (y != fi->map.y) {
		i = 0;
		while (fi->map.map[j][i] != '\0') {
			fi->map.compter++;
			i++;
		}
		space_end(fi, j, i);
		fi->map.compter = 0;
		y++;
		j++;
	}
}

void set_good_texture2(files *fi, int i, int j)
{
	if (fi->map.map[j][i] == ' ')
		fi->map.map[j][i] = '.';
	if (fi->map.map[j][i] == 'X' &&
	(fi->map.map[j - 1][i] == '.' ||
	fi->map.map[j - 1][i] == 'R' ||
	fi->map.map[j - 1][i] == 'r' ||
	fi->map.map[j - 1][i] == 'O' ||
	fi->map.map[j - 1][i] == 'E'))
		fi->map.map[j][i] = '~';
	if (fi->map.map[j][i] == 'R' &&
	fi->map.map[j][i + 1] == '.')
		fi->map.map[j][i + 1] = 'O';
	else if (fi->map.map[j][i] == 'R' &&
	(fi->map.map[j][i + 1] == 'R' ||
	fi->map.map[j][i + 1] == 'X'))
		fi->map.map[j][i] = 'r';
	if (j >= 1)
		set_good_texture3(fi, i, j);
}

void set_good_texture(files *fi)
{
	int i = 0;
	int j = 0;
	int y = 0;

	while (y != fi->map.y) {
		i = 0;
		while (fi->map.map[j][i] != '\0') {
			set_good_texture2(fi, i, j);
			i++;
		}
		y++;
		j++;
	}
}

void affichage_map(files *fi)
{
	int i = 0;
	int y = 0;
	int j = 0;

	while (y != fi->map.y) {
		i = 0;
		while (fi->map.map[j][i] != '\0') {
			detect_texture(fi, j, i);
			i++;
		}
		fi->character.pos_clock++;
		if (fi->character.pos_clock == 450) {
			fi->character.pos_x++;
			fi->character.pos_clock = 0;
		}
		fi->map.delete += 0.2;
		y++;
		j++;
	}
}
