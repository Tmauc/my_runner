##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/error.c	\
		src/help.c	\
		src/win.c	\
		src/prog.c	\
		src/destroy.c	\
		src/draw.c	\
		src/setup.c	\
		src/sprite.c	\
		src/eventkey.c	\
		src/menu/menu.c	\
		src/menu/menusetup.c	\
		src/menu/menupause.c	\
		src/sound/sound.c	\
		src/score/score.c	\
		src/score/timescore.c	\
		src/score/scoremult.c	\
		src/map/getmap.c	\
		src/map/getmap2.c	\
		src/map/getmap3.c	\
		src/character/gravity.c	\
		src/character/character.c	\
		src/character/character2.c	\
		src/character/timecharacter.c	\
		src/coltexture/texture.c	\
		src/coltexture/texture2.c	\
		src/coltexture/collision.c	\
		src/coltexture/collision2.c	\
		src/background/background.c	\
		src/background/background1.c	\
		src/background/background2.c	\
		src/background/background3.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CPPFLAGS=	-I include

CFLAGS	= 	-Wextra -Wall -Werror -g3

LDFLAGS	=	-L lib/my -lmy -l c_graph_prog

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	make clean -C lib/my
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME)

re: fclean all
