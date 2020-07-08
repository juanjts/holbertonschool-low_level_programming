#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - is the function
 * @ac: argc
 * @av: argv
 * Return: str values
 */
char *argstostr(int ac, char **av)
{
	int c = 0, j, longg = 0, l, i;
	char *str;

	if (ac == 0 || av == '\0')
	return (NULL);

	for (c = 0; c < ac; c++)
	{
		j = 0;
		while (av[c][j] != '\0')
		{
			j++;
		}
		longg  +=  j + 1;
	}
	str = malloc(sizeof(char) * (longg + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	longg = 0;
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l] != '\0'; l++)
		{
			*(str + longg) = av[i][l];
			longg++;
		}
		*(str + longg) = '\n';
		longg++;
	}

	return (str);
}
