/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct Clock
{
	sfClock *clock;
	sfTime tmp;
	float seconds;
} Clock;

typedef struct character
{
	int anime;
	int attack;
	int dodge;
	float character_up;
	float character_down;
	float seconds_ch;
	int pos_clock;
	int pos_character;
	int pos_x;
	sfSound *sound_jump;
	sfSound *sound_attack;
	sfSoundBuffer *buffer_jump;
	sfSoundBuffer *buffer_attack;
	sfClock *clock;
	sfTime tmp_ch;
	sfTexture *CAtexture;
	sfSprite *CAsprite;
	sfVector2f casquare2;
	sfTexture *Dtexture;
	sfSprite *Dsprite;
	sfVector2f dsquare2;
	sfTexture *CJtexture;
	sfSprite *CJsprite;
	sfVector2f cjsquare2;
	sfTexture *CFtexture;
	sfSprite *CFsprite;
	sfVector2f cfsquare2;
	sfTexture *Ctexture;
	sfSprite *Csprite;
	sfVector2f square2;
	sfVector2f invers;
	sfVector2f invers2;
} character;

typedef struct Background
{
	sfTexture *Bgtexture;
	sfSprite *Bgsprite;
} Background;

typedef struct Menu
{
	sfMusic *music;
	sfTexture *Mtexture;
	sfSprite *Msprite;
	sfVector2f msquare2;
} Menu;

typedef struct Menupause
{
	sfMusic *music;
	sfTexture *Mptexture;
	sfSprite *Mpsprite;
	sfVector2f mpsquare2;
} Menupause;

typedef struct Texture
{
	sfTexture *Ttexture;
	sfSprite *Tsprite;
	sfVector2f tsquare2;
	sfTexture *TDtexture;
	sfSprite *TDsprite;
	sfVector2f tdsquare2;
	sfTexture *R1texture;
	sfSprite *R1sprite;
	sfVector2f r1square2;
	sfTexture *R2texture;
	sfSprite *R2sprite;
	sfVector2f r2square2;
	sfTexture *R3texture;
	sfSprite *R3sprite;
	sfVector2f r3square2;
	sfTexture *Etexture;
	sfSprite *Esprite;
	sfVector2f esquare2;
} Texture;

typedef struct Score
{
	int co;
	sfTexture *Stexture;
	sfSprite *Ssprite;
	sfVector2f ssquare2;
	sfTexture *S2texture;
	sfSprite *S2sprite;
	sfVector2f s2square2;
	sfTexture *S3texture;
	sfSprite *S3sprite;
	sfVector2f s3square2;
	sfTexture *S4texture;
	sfSprite *S4sprite;
	sfVector2f s4square2;
	sfTexture *S5texture;
	sfSprite *S5sprite;
	sfVector2f s5square2;
} Score;

typedef struct Background1
{
	sfTexture *B1texture;
	sfSprite *B1sprite;
	sfVector2f b1square2;
} Background1;

typedef struct Background2
{
	sfTexture *B2texture;
	sfSprite *B2sprite;
	sfVector2f b2square2;
} Background2;

typedef struct Background3
{
	sfTexture *B3texture;
	sfSprite *B3sprite;
	sfVector2f b3square2;
} Background3;

typedef struct map
{
	int x;
	int X;
	int y;
	int compter;
	float delete;
	char **map;
} Map;

typedef struct help
{
	char *tmp;
} help;

typedef struct files
{
	int a;
	struct stat b;
	char *tmp;
	sfMusic *music;
	sfRenderWindow *window;
	sfIntRect square;
	sfIntRect cjsquare;
	sfIntRect dsquare;
	sfIntRect cfsquare;
	sfIntRect casquare;
	sfIntRect b1square;
	sfIntRect b2square;
	sfIntRect b3square;
	sfIntRect bsquare;
	sfIntRect ssquare;
	sfIntRect s2square;
	sfIntRect s3square;
	sfIntRect s4square;
	sfIntRect s5square;
	sfIntRect csquare;
	sfIntRect msquare;
	sfIntRect mpsquare;
	sfIntRect tsquare;
	sfIntRect tdsquare;
	sfIntRect r1square;
	sfIntRect r2square;
	sfIntRect r3square;
	sfIntRect esquare;
	character character;
	Background background;
	Background1 background1;
	Background2 background2;
	Background3 background3;
	Clock time;
	Menu menu;
	Map map;
	Menupause menupause;
	Score score;
	Texture texture;
} files;

#endif
