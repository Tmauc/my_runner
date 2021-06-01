/*
** EPITECH PROJECT, 2017
** character2
** File description:
** character2
*/

#include "my.h"

void setsquare2_character(files *fi)
{
	fi->character.square2.x = 640;
	fi->character.square2.y = 800;
	fi->character.cfsquare2.x = 640;
	fi->character.cfsquare2.y = 800;
	fi->character.cjsquare2.x = 640;
	fi->character.cjsquare2.y = 800;
	fi->character.invers.x = 1;
	fi->character.invers.y = 1;
	fi->character.casquare2.x = 590;
	fi->character.casquare2.y = 780;
	fi->character.invers2.x = 0.6;
	fi->character.invers2.y = 0.6;
	fi->character.dsquare2.x = 600;
	fi->character.dsquare2.y = 790;
}

void timecharacterfall(files *fi)
{
	if (fi->time.seconds > 0.1) {
		if (fi->cfsquare.left == 1600)
			fi->cfsquare.left = 0;
		else {
			fi->cfsquare.left = fi->cfsquare.left + 200;
		}
		sfClock_restart(fi->time.clock);
	}
	sfSprite_setTextureRect(fi->character.CFsprite, fi->cfsquare);
}

void timecharacterdodge(files *fi)
{
	if (fi->time.seconds > 0.1 && fi->character.dodge > 0) {
		if (fi->dsquare.left == 2420) {
			fi->dsquare.left = 0;
			fi->character.dodge = fi->character.dodge - 1;
		} else {
			fi->dsquare.left = fi->dsquare.left + 220;
			fi->character.dodge = fi->character.dodge - 1;
		}
		sfClock_restart(fi->time.clock);
	}
	sfSprite_setTextureRect(fi->character.Dsprite, fi->dsquare);
}

void timecharacterattack(files *fi)
{
	if (fi->time.seconds > 0.1 && fi->character.attack > 0) {
		if (fi->casquare.left == 1400) {
			sfSound_stop(fi->character.sound_attack);
			fi->casquare.left = 0;
			fi->character.attack = fi->character.attack - 1;
		} else {
			fi->casquare.left = fi->casquare.left + 200;
			fi->character.attack = fi->character.attack - 1;
		}
		sfClock_restart(fi->time.clock);
	}
	sfSprite_setTextureRect(fi->character.CAsprite, fi->casquare);
}

void attack(files *fi)
{
	if (fi->character.attack == 0 && fi->character.anime == 2)
		fi->character.anime = fi->character.anime;
}
