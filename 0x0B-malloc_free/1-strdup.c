#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - copy of a string given as parameter
*@str: Pointer to a string
*Return: the pointer
*/
char *_strdup(char *str)
{
	int c = 0;

	int i = 0;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
	{
		c++;
	}
	c++;

	ptr = malloc(c * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c ; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
