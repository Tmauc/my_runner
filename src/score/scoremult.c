/*
** EPITECH PROJECT, 2017
** score
** File description:
** score
*/

#include "my.h"

void setsquare2_score(files *fi)
{
	fi->score.ssquare2.x = 1800;
	fi->score.ssquare2.y = 20;
	fi->score.s2square2.x = 1700;
	fi->score.s2square2.y = 20;
	fi->score.s3square2.x = 1600;
	fi->score.s3square2.y = 20;
	fi->score.s4square2.x = 1500;
	fi->score.s4square2.y = 20;
	fi->score.s5square2.x = 1400;
	fi->score.s5square2.y = 20;
}

void score_mult4(files *fi)
{
	if (fi->s5square.left == 900) {
		fi->s5square.left = 0;
	} else
		fi->s5square.left = fi->s5square.left + 100;
}

void score_mult3(files *fi)
{
	if (fi->s4square.left == 900) {
		fi->score.co += 1;
		score_mult4(fi);
		fi->s4square.left = 0;
	} else
		fi->s4square.left = fi->s4square.left + 100;
}

void score_mult2(files *fi)
{
	if (fi->s3square.left == 900) {
		fi->score.co += 1;
		score_mult3(fi);
		fi->s3square.left = 0;
	} else
		fi->s3square.left = fi->s3square.left + 100;
}

void score_mult1(files *fi)
{
	if (fi->s2square.left == 900) {
		fi->score.co += 1;
		score_mult2(fi);
		fi->s2square.left = 0;
	} else
		fi->s2square.left = fi->s2square.left + 100;
}
