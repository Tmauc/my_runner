/*
** EPITECH PROJECT, 2017
** setup
** File description:
** setup
*/

#include "my.h"

void setupclock(files *fi)
{
	fi->time.clock = sfClock_create();
	fi->character.clock = sfClock_create();
}

void squaresetup(files *fi)
{
	squaresetup_character(fi);
	squaresetup_background(fi);
	squaresetup_score(fi);
	squaresetup_menu(fi);
	squaresetup_texture(fi);
}

void setsquare2(files *fi)
{
	fi->menu.msquare2.x = 0;
	fi->menu.msquare2.y = 0;
	fi->menupause.mpsquare2.x = 0;
	fi->menupause.mpsquare2.y = 0;
	setsquare2_texture(fi);
	setsquare2_character(fi);
	setsquare2_score(fi);
	setsquare2_background(fi);
}

void spriteset(files *fi)
{
	spriteset_character(fi);
	spriteset_background(fi);
	spriteset_score(fi);
	spriteset_menu(fi);
	spriteset_texture(fi);
}

void setup(files *fi)
{
	setupclock(fi);
	menusetup(fi);
	menupausesetup(fi);
	charactersetup(fi);
	backgroundsetup(fi);
	background1setup(fi);
	background2setup(fi);
	background3setup(fi);
	scoresetup(fi);
	texturesetup(fi);
	squaresetup(fi);
	spriteset(fi);
}
