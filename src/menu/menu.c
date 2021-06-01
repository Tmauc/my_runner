/*
** EPITECH PROJECT, 2017
** menu
** File description:
** menu
*/

#include "my.h"

void soundmenu(files *fi)
{
	fi->a = 0;
	fi->menu.music = sfMusic_createFromFile("music/sao.wav");
	sfMusic_play(fi->menu.music);
	sfMusic_setVolume(fi->menu.music, 15);
}

int menu_mousebutton(sfEvent event)
{
	if (event.mouseButton.x >= 1621 && event.mouseButton.x <= 1833 &&
	event.mouseButton.y >= 37 && event.mouseButton.y <= 119)
		return (1);
	else if (event.mouseButton.x >= 1613 && event.mouseButton.x <= 1841 &&
	event.mouseButton.y >= 281 && event.mouseButton.y <= 387)
		return (2);
	else
		return (0);
}

void menu_mousemove(files *fi, sfEvent event)
{
	if (event.type == sfEvtMouseMoved) {
		if (event.mouseMove.x >= 1621 && event.mouseMove.x <= 1833 &&
		event.mouseMove.y >= 37 && event.mouseMove.y <= 119)
			fi->msquare.left = 1920;
		else if (event.mouseMove.x >= 1527 && event.mouseMove.x <= 1892 &&
		event.mouseMove.y >= 152 && event.mouseMove.y <= 239)
			fi->msquare.left = 3840;
		else if (event.mouseMove.x >= 1613 && event.mouseMove.x <= 1841 &&
		event.mouseMove.y >= 281 && event.mouseMove.y <= 387)
			fi->msquare.left = 5760;
		else
			fi->msquare.left = 0;
		sfSprite_setTextureRect(fi->menu.Msprite, fi->msquare);
	}
}

void restart(files *fi)
{
	fi->score.co = 0;
	squaresetup_score(fi);
	fi->map.delete = 0;
	fi->character.pos_clock= 0;
	fi->character.pos_x = 8;
	fi->character.pos_character = 800;
}

int menu(files *fi)
{
	sfEvent event;

	restart(fi);
	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			return (2);
		else if (event.type == sfEvtMouseButtonPressed)
			return (menu_mousebutton(event));
		else
			menu_mousemove(fi, event);
	}
	if (sfMusic_getStatus(fi->menu.music) == 0)
		sfMusic_play(fi->menu.music);
	sfRenderWindow_drawSprite(fi->window, fi->menu.Msprite, NULL);
	sfRenderWindow_display(fi->window);
	return (0);
}
