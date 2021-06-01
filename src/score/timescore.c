/*
** EPITECH PROJECT, 2017
** timescore
** File description:
** timescore
*/

#include "my.h"

void timescore(files *fi)
{
	if (fi->time.seconds > 0.1) {
		if (fi->ssquare.left == 900) {
			fi->score.co += 1;
			score_mult1(fi);
			fi->ssquare.left = 0;
		} else
			fi->ssquare.left = fi->ssquare.left + 100;
		sfSprite_setTextureRect(fi->score.Ssprite, fi->ssquare);
		sfSprite_setTextureRect(fi->score.S2sprite, fi->s2square);
		sfSprite_setTextureRect(fi->score.S3sprite, fi->s3square);
		sfSprite_setTextureRect(fi->score.S4sprite, fi->s4square);
		sfSprite_setTextureRect(fi->score.S5sprite, fi->s5square);
	}
}
