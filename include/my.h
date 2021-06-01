/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "struct.h"

int help2(help *he);
int prog(char **av);
void my_putchar(char c);
int my_putstr(char const *str);
void attack(files *fi);
void background3setup(files *fi);
void background2setup(files *fi);
void background1setup(files *fi);
void backgroundsetup(files *fi);
void charactersetup(files *fi);
int error(int ac, char **av);
void eventkey(sfEvent event, files *fi);
void eventcheck(files *fi, sfEvent event);
void draw(files *fi);
void destroy(files *fi);
void detect_ok(files *fi);
int detect_collision(files *fi);
int detect_air(files*fi, int j);
int detect_grasse(files *fi, int j);
int detect_rock2(files *fi, int j);
int detect_rock3(files *fi, int j);
void detect_texture(files *fi, int j, int i);
void getx(files *fi);
void gravity(files *fi);
int keyEscape(files *fi);
int menu(files *fi);
void menusetup(files *fi);
void menupausesetup(files *fi);
int pause_fonc(files *fi);
void mapsetup(files *fi, char **av, struct stat a);
void new_str(struct stat a, files *fi);
void prog_map(files *fi);
void affichage_map(files *fi);
void squaresetup_menu(files *fi);
void squaresetup_background(files *fi);
void squaresetup_texture(files *fi);
void squaresetup_character(files *fi);
void squaresetup_score(files *fi);
void squaresetup_score2(files *fi);
void setsquare2(files *fi);
void setsquare2_texture(files *fi);
void set_good_texture3(files *fi, int i, int j);
void setsquare2_score(files *fi);
void setsquare2_character(files *fi);
void setsquare2_background(files *fi);
void spriteset_caisse(files *fi);
void spriteset_menu(files *fi);
void spriteset_background(files *fi);
void spriteset_character(files *fi);
void spriteset_texture(files *fi);
void spriteset_score(files *fi);
void sound(files *fi);
void soundplay(files *fi);
void soundmenu(files *fi);
void soundsetup(files *fi);
void soundplay_jump(files *fi);
void score_mult1(files *fi);
void scoresetup(files *fi);
void setup(files *fi);
void set_good_texture(files *fi);
void space_end(files *fi, int j, int i);
int sprite_move(files *fi);
void timescore(files *fi);
void timecasse(files *fi);
void timebackground3(files *fi);
void timebackground2(files *fi);
void timebackground1(files *fi);
void timecharacter(files *fi);
void timecharacterjump(files *fi);
void timecharacterattack(files *fi);
void timecharacterdodge(files *fi);
void texturesetup(files *fi);
int windows(files *fi);
int win(files *fi);
sfRenderWindow* window_create(files *fi, char *name);

#endif
