/*
** EPITECH PROJECT, 2017
** win
** File description:
** win
*/

#include "my.h"

void text(files *fi)
{
	sfText *text = sfText_create();
	sfFont *font = sfFont_createFromFile("sprite/font/font.ttf");
	sfVector2f textsquare2;

	textsquare2.x = 1200;
	textsquare2.y = 300;
	sfText_setString(text, "You Win!!");
	sfText_setColor(text, sfBlack);
	sfText_setFont(text, font);
	sfText_setCharacterSize(text, 100);
	sfText_setPosition(text, textsquare2);
	sfRenderWindow_drawText(fi->window, text, NULL);
	sfRenderWindow_display(fi->window);
	sfText_destroy(text);
	sfFont_destroy(font);
}

int win(files *fi)
{
	sfEvent event;

	text(fi);
	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			return (2);
		else if (event.type == sfEvtMouseButtonPressed ||
		event.type == sfEvtKeyPressed)
			return (0);
		else
			return (3);
	}
	return (3);
}
