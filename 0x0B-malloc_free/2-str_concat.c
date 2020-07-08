#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: array 1
 * @s2: array 2
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, c, l;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;

	j = 0;

	while (*(s1 + i) != '\0')
		i++;

	while (*(s2 + j) != '\0')
		j++;

	concat = malloc(i + j + 1);

	if (concat == 0)
	{
		return (0);
	}

	for (c = 0; c < i; c++)
	{
		*(concat + c) = *(s1 + c);
	}
	for (c = 0, l = i; c < j; l++, c++)
	{
		*(concat + l) = *(s2 + c);
	}
	*(concat + l) = '\0';
	return (concat);
}
