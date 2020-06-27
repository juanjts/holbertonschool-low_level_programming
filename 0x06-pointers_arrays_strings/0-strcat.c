#include "holberton.h"

/**
 * _strcat -  function concatenates diferent strings.
 * @dest: s1
 * @src: s2
 * Return: if is necessary
 */
char *_strcat(char *dest, char *src)
{

	int i = 0, c = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}
