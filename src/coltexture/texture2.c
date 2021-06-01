/*
** EPITECH PROJECT, 2017
** texture2
** File description:
** texture2
*/

#include "my.h"

void check_end(files *fi, int j, int i)
{
	if (fi->map.map[j][i] == 'E') {
		fi->texture.esquare2.x = i * 90 - fi->map.delete;
		fi->texture.esquare2.y = j * 90;
		sfSprite_setTextureRect(fi->texture.Esprite, fi->esquare);
		sfSprite_setPosition(fi->texture.Esprite,
		fi->texture.esquare2);
		sfRenderWindow_drawSprite(fi->window,
		fi->texture.Esprite, NULL);
	}
}

void check_rock2(files *fi, int j, int i)
{
	if (fi->map.map[j][i] == 'r') {
		fi->texture.r3square2.x = i * 90 - fi->map.delete;
		fi->texture.r3square2.y = j * 90 + 10;
		sfSprite_setTextureRect(fi->texture.R3sprite, fi->r3square);
		sfSprite_setPosition(fi->texture.R3sprite,
		fi->texture.r3square2);
		sfRenderWindow_drawSprite(fi->window,
		fi->texture.R3sprite, NULL);
	}
}

void check_rock(files *fi, int j, int i)
{
	if (fi->map.map[j][i] == 'R') {
		fi->texture.r1square2.x = i * 90 - fi->map.delete;
		fi->texture.r1square2.y = j * 90 + 10;
		sfSprite_setTextureRect(fi->texture.R1sprite, fi->r1square);
		sfSprite_setPosition(fi->texture.R1sprite,
		fi->texture.r1square2);
		sfRenderWindow_drawSprite(fi->window,
		fi->texture.R1sprite, NULL);
	} else if (fi->map.map[j][i] == 'O') {
		fi->texture.r2square2.x = i * 90 - fi->map.delete;
		fi->texture.r2square2.y = j * 90 + 10;
		sfSprite_setTextureRect(fi->texture.R2sprite, fi->r2square);
		sfSprite_setPosition(fi->texture.R2sprite,
		fi->texture.r2square2);
		sfRenderWindow_drawSprite(fi->window,
		fi->texture.R2sprite, NULL);
	}
	check_rock2(fi, j, i);
	check_end(fi, j, i);
}

void detect_texture(files *fi, int j, int i)
{
	if (fi->map.map[j][i] == '~') {
		fi->texture.tsquare2.x = i * 90 - fi->map.delete;
		fi->texture.tsquare2.y = j * 90;
		sfSprite_setTextureRect(fi->texture.Tsprite, fi->tsquare);
		sfSprite_setPosition(fi->texture.Tsprite, fi->texture.tsquare2);
		sfRenderWindow_drawSprite(fi->window,
		fi->texture.Tsprite, NULL);
	} else if (fi->map.map[j][i] == 'X') {
		fi->texture.tdsquare2.x = i * 90 - fi->map.delete;
		fi->texture.tdsquare2.y = j * 90;
		sfSprite_setTextureRect(fi->texture.TDsprite, fi->tdsquare);
		sfSprite_setPosition(fi->texture.TDsprite,
		fi->texture.tdsquare2);
		sfRenderWindow_drawSprite(fi->window,
		fi->texture.TDsprite, NULL);
	}
	check_rock(fi, j, i);
}

void set_good_texture3(files *fi, int i, int j)
{
	if (fi->map.map[j][i] == ' ')
		fi->map.map[j][i] = '.';
	if ((fi->map.map[j][i] == '.' || fi->map.map[j][i] == ' ') &&
	(fi->map.map[j - 1][i] == 'E')){
		fi->map.map[j][i] = 'E';
	}
}
