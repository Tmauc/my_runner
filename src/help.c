/*
** EPITECH PROJECT, 2017
** help
** File description:
** help
*/

#include "my.h"

void new_strhelp(int size, help *he)
{
	he->tmp = malloc(sizeof(char) * size + 1);
	int i = 0;

	while (i < size) {
		he->tmp[i] = ' ';
		i++;
	}
	he->tmp[i] = '\0';
}

void gethelp(int size, help *he)
{
	int file = open("help/h", O_RDONLY);
	char *buff = he->tmp;
	int i = 0;

	buff = malloc(sizeof(char) * size + 1);
	read(file, buff, size);
	buff[size] = '\0';
	while (buff[i] != '\0') {
		while (buff[i]	!= '\n') {
			my_putchar(buff[i]);
			i++;
		}
		my_putchar('\n');
		i++;
	}
	my_putchar('\n');
	free (buff);
	free (he->tmp);
}

int help2(help *he)
{
	struct stat b;
	int size = 0;

	if (stat("help/h", &b) != 0)
		return (0);
	size = b.st_size;
	new_strhelp(size, he);
	gethelp(size, he);
	return (0);
}
/*
void help()
{
	int file = open("help/h", O_RDONLY);
	char buff[BUFF_SIZE];

	while (read(file, buff, BUFF_SIZE)) {
		for (int i = 0; buff[i + 1] != '\0'; i++) {
			my_putchar(buff[i]);
		}
	}
	my_putchar('\n');
	my_putchar('\n');
}
*/
