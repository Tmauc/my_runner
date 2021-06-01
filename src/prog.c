/*
** EPITECH PROJECT, 2017
** prog
** File description:
** prog
*/

#include "my.h"

sfRenderWindow* window_create(files *fi, char *name)
{
	sfVideoMode window2 = {1920, 1080, 32};
	fi->window = sfRenderWindow_create(window2, name, sfClose, NULL);
	return (0);
}

int windows(files *fi)
{
	sfEvent event;
	int a = 1;

	if (fi->a == 0)
		sound(fi);
	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		eventcheck(fi, event);
		if (event.type == sfEvtKeyPressed &&
		event.key.code == sfKeyEscape)
			return (keyEscape(fi));
	}
	if (sfMusic_getStatus(fi->music) == 0)
		sfMusic_play(fi->music);
	a = sprite_move(fi);
	draw(fi);
	return (a);
}

int create(files *fi, char **av)
{
	struct stat a;

	if (stat(av[1], &a) != 0)
		return (0);
	new_str(a, fi);
	mapsetup(fi, av, a);
	soundsetup(fi);
	window_create(fi, "my_runner");
	soundmenu(fi);
	setsquare2(fi);
	setup(fi);
	return (0);
}

int prog(char **av)
{
	int o = 0;
	files fi;

	create(&fi, av);
	while (sfRenderWindow_isOpen(fi.window)) {
		while (o == 0)
			o = menu(&fi);
		sfMusic_stop(fi.menu.music);
		if (o == 1)
			o = windows(&fi);
		else if (o == 2)
			sfRenderWindow_close(fi.window);
		if (o == 3)
			o = win(&fi);
	}
	destroy(&fi);
	return (0);
}
