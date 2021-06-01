/*
** EPITECH PROJECT, 2017
** destroy
** File description:
** desroy
*/

#include "my.h"

void free_map(files *fi)
{
	int i = 0;
	int j = 0;
	int y = 0;

	while (y != fi->map.y) {
		i = 0;
		while (fi->map.map[j][i] != '\0') {
			i++;
		}
		free (fi->map.map[j]);
		y++;
		j++;
	}
	free (fi->map.map);
	free (fi->tmp);
}

void destroy4(files *fi)
{
	sfTexture_destroy(fi->menupause.Mptexture);
	sfTexture_destroy(fi->texture.Ttexture);
	sfTexture_destroy(fi->texture.TDtexture);
	sfTexture_destroy(fi->texture.R1texture);
	sfTexture_destroy(fi->texture.R2texture);
	sfTexture_destroy(fi->texture.R3texture);
	sfTexture_destroy(fi->texture.Etexture);
	sfTexture_destroy(fi->score.Stexture);
	sfTexture_destroy(fi->background1.B1texture);
	sfTexture_destroy(fi->background2.B2texture);
	sfTexture_destroy(fi->background3.B3texture);
	sfSoundBuffer_destroy(fi->character.buffer_jump);
	sfSoundBuffer_destroy(fi->character.buffer_attack);
}

void destroy3(files *fi)
{
	sfClock_destroy(fi->time.clock);
	sfClock_destroy(fi->character.clock);
	sfTexture_destroy(fi->character.CAtexture);
	sfTexture_destroy(fi->character.Dtexture);
	sfTexture_destroy(fi->character.CJtexture);
	sfTexture_destroy(fi->character.CFtexture);
	sfTexture_destroy(fi->character.Ctexture);
	sfTexture_destroy(fi->background.Bgtexture);
	sfTexture_destroy(fi->menu.Mtexture);
	destroy4(fi);
	free_map(fi);
}

void destroy2(files *fi)
{
	sfSprite_destroy(fi->score.Ssprite);
	sfSprite_destroy(fi->score.S2sprite);
	sfSprite_destroy(fi->score.S3sprite);
	sfSprite_destroy(fi->score.S4sprite);
	sfSprite_destroy(fi->score.S5sprite);
	if (fi->a == 1) {
		sfMusic_stop(fi->music);
		sfMusic_destroy(fi->music);
	}
	sfMusic_destroy(fi->menu.music);
	sfSound_stop(fi->character.sound_jump);
	sfSound_destroy(fi->character.sound_jump);
	sfSound_stop(fi->character.sound_attack);
	sfSound_destroy(fi->character.sound_attack);
	sfRenderWindow_destroy(fi->window);
	destroy3(fi);
}

void destroy(files *fi)
{
	sfSprite_destroy(fi->character.Csprite);
	sfSprite_destroy(fi->character.CFsprite);
	sfSprite_destroy(fi->character.CJsprite);
	sfSprite_destroy(fi->character.CAsprite);
	sfSprite_destroy(fi->character.Dsprite);
	sfSprite_destroy(fi->background1.B1sprite);
	sfSprite_destroy(fi->background2.B2sprite);
	sfSprite_destroy(fi->background3.B3sprite);
	sfSprite_destroy(fi->background.Bgsprite);
	sfSprite_destroy(fi->texture.Tsprite);
	sfSprite_destroy(fi->texture.TDsprite);
	sfSprite_destroy(fi->texture.R1sprite);
	sfSprite_destroy(fi->texture.R2sprite);
	sfSprite_destroy(fi->texture.R3sprite);
	sfSprite_destroy(fi->texture.Esprite);
	sfSprite_destroy(fi->menu.Msprite);
	sfSprite_destroy(fi->menupause.Mpsprite);
	destroy2(fi);
}
