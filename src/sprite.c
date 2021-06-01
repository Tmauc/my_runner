/*
** EPITECH PROJECT, 2017
** sprite
** File description:
** sprite
*/

#include "my.h"

void sound(files *fi)
{
	fi->music = sfMusic_createFromFile("music/music.wav");
	sfMusic_play(fi->music);
	sfMusic_setVolume(fi->music, 50);
	fi->a = 1;
}

int sprite_move(files *fi)
{
	fi->time.tmp = sfClock_getElapsedTime(fi->time.clock);
	fi->time.seconds = fi->time.tmp.microseconds / 700000.0;
	gravity(fi);
	attack(fi);
	timebackground1(fi);
	timebackground2(fi);
	timebackground3(fi);
	timescore(fi);
	timecharacter(fi);
	timecharacterjump(fi);
	timecharacterattack(fi);
	timecharacterdodge(fi);
	return (detect_collision(fi));
}
