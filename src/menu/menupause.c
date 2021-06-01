/*
** EPITECH PROJECT, 2017
** menupause
** File description:
** menupause
*/

#include "my.h"

int menupause_mousebutton(sfEvent event)
{
	if (event.mouseButton.x >= 795 && event.mouseButton.x <= 1095 &&
	event.mouseButton.y >= 186 && event.mouseButton.y <= 272)
		return (1);
	else if (event.mouseButton.x >= 829 && event.mouseButton.x <= 1095 &&
	event.mouseButton.y >= 457 && event.mouseButton.y <= 542)
		return (0);
	else if (event.mouseButton.x >= 847 && event.mouseButton.x <= 1075 &&
	event.mouseButton.y >= 755 && event.mouseButton.y <= 867)
		return (2);
	return (3);
}

void menupause_mousemove(files *fi, sfEvent event)
{
	if (event.type == sfEvtMouseMoved) {
		if (event.mouseMove.x >= 795 && event.mouseMove.x <= 1095 &&
		event.mouseMove.y >= 186 && event.mouseMove.y <= 272)
			fi->mpsquare.left = 1920;
		else if (event.mouseMove.x >= 829 &&
			event.mouseMove.x <= 1095 &&
		event.mouseMove.y >= 457 && event.mouseMove.y <= 542)
			fi->mpsquare.left = 3840;
		else if (event.mouseMove.x >= 847 &&
			event.mouseMove.x <= 1075 &&
		event.mouseMove.y >= 755 && event.mouseMove.y <= 867)
			fi->mpsquare.left = 5760;
		else
			fi->mpsquare.left = 0;
		sfSprite_setTextureRect(fi->menupause.Mpsprite, fi->mpsquare);
	}
}

int menupause(files *fi)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			return (2);
		else if (event.type == sfEvtMouseButtonPressed) {
			return (menupause_mousebutton(event));
		} else {
			menupause_mousemove(fi, event);
		}
	}
	sfRenderWindow_drawSprite(fi->window, fi->menupause.Mpsprite, NULL);
	sfRenderWindow_display(fi->window);
	return (3);
}

int pause_fonc(files *fi)
{
	int pause = 0;

	pause = menupause(fi);
	if (pause == 0)
		return (0);
	else if (pause == 1)
		return (1);
	else if (pause == 2)
		return (2);
	else
		return (3);
}
