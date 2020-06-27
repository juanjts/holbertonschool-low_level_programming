#include "holberton.h"

/**
 * _strcpy - print reverse characters.
 * @dest: Array
 * @src: value of array
 * Return: if is necesary
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
