/*
** EPITECH PROJECT, 2017
** getmap
** File description:
** getmap
*/

#include "my.h"

char *getmap(char **av, struct stat a, files *fi)
{
	int file = open(av[1], O_RDONLY);
	char *buff = fi->tmp;

	buff = malloc(sizeof(char) * a.st_size + 1);
	read(file, buff, a.st_size);
	buff[a.st_size] = '\0';
	return (buff);
}

int char_to_tab(char *buff, files *fi)
{
	int i = 0;
	int j = 0;
	int b = 0;

	fi->map.map = malloc(sizeof(char *) * fi->map.y);
	while (buff[i] != '\0') {
		b = 0;
		fi->map.map[j] = malloc(sizeof(char) * fi->map.X + 1);
		while (buff[i] != '\n') {
			fi->map.map[j][b] = buff[i];
			i++;
			b++;
		}
		fi->map.map[j][b] = '\0';
		i++;
		j++;
	}
	return (0);
}

void space_end(files *fi, int j, int i)
{
	while (fi->map.compter < fi->map.X) {
		fi->map.map[j][i] = '.';
		i++;
		fi->map.compter++;
	}
	fi->map.map[j][i] = '\0';

}

void size_tab(char *buff, files *fi)
{
	int i = 0;

	while (buff[i] != '\0') {
		fi->map.x = 0;
		while (buff[i] != '\n') {
			fi->map.x++;
			i++;
		}
		getx(fi);
		i++;
		fi->map.y++;
	}
}

void mapsetup(files *fi, char **av, struct stat a)
{
	char *buff = getmap(av, a, fi);

	fi->map.X = 0;
	fi->map.y = 0;
	fi->map.map = NULL;
	fi->map.compter = 0;
	fi->map.delete = 0;
	size_tab(buff, fi);
	char_to_tab(buff, fi);
	prog_map(fi);
	set_good_texture(fi);
	free (buff);
}
