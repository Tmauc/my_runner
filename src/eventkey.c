/*
** EPITECH PROJECT, 2017
** eventkey
** File description:
** eventkey
*/

#include "my.h"

int keyEscape(files *fi)
{
	int a = 1;
	int b = 3;

	fi->mpsquare.left = 0;
	sfSprite_setTextureRect(fi->menupause.Mpsprite, fi->mpsquare);
	while (a == 1) {
		b = pause_fonc(fi);
		if (b == 0) {
			sfMusic_stop(fi->music);
			return (0);
		} else if (b == 1)
			return (1);
		else if (b == 2) {
			a = 0;
			return (2);
		} else
			a = 1;
	}
	return (0);
}

void eventkey2(files *fi)
{
	sfSprite_setTextureRect(fi->character.CAsprite, fi->casquare);
	sfSprite_setPosition(fi->character.CAsprite,
	fi->character.casquare2);
	sfSprite_setTextureRect(fi->character.Dsprite, fi->dsquare);
	sfSprite_setPosition(fi->character.Dsprite,
	fi->character.dsquare2);
}

void eventkey(sfEvent event, files *fi)
{
	if (event.type == sfEvtMouseButtonPressed) {
		if (event.mouseButton.button == sfMouseLeft &&
			fi->character.anime == 0) {
			fi->character.anime = 2;
			fi->character.attack = 8;
			fi->character.casquare2.y =
			fi->character.pos_character - 20;
			soundplay(fi);
		} else if (event.mouseButton.button == sfMouseRight) {
			fi->character.anime = 3;
			fi->character.dodge = 12;
			fi->character.dsquare2.y =
			fi->character.pos_character - 10;
		}
		eventkey2(fi);
	}
}

void eventcheck(files *fi, sfEvent event)
{
	if (event.type == sfEvtClosed)
		sfRenderWindow_close(fi->window);
	else if (event.type == sfEvtKeyPressed && event.key.code == sfKeySpace) {
		fi->character.character_up = -8;
		fi->character.anime = 1;
		fi->character.cjsquare2.y += fi->character.character_up;
		soundplay_jump(fi);
	} else
		eventkey(event, fi);
}
