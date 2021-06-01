/*
** EPITECH PROJECT, 2017
** sound
** File description:
** sound
*/

#include "my.h"

void soundplay_jump(files *fi)
{
	if (sfSound_getStatus(fi->character.sound_jump) == 0)
		sfSound_play(fi->character.sound_jump);
}
void soundplay(files *fi)
{
	if (sfSound_getStatus(fi->character.sound_attack) == 0)
		sfSound_play(fi->character.sound_attack);
}

void soundsetup(files *fi)
{
	fi->character.buffer_jump =
	sfSoundBuffer_createFromFile("music/jump.wav");
	fi->character.sound_jump = sfSound_create();
	sfSound_setBuffer(fi->character.sound_jump, fi->character.buffer_jump);
	fi->character.buffer_attack =
	sfSoundBuffer_createFromFile("music/attack.wav");
	fi->character.sound_attack = sfSound_create();
	sfSound_setBuffer(fi->character.sound_attack,
	fi->character.buffer_attack);
}
