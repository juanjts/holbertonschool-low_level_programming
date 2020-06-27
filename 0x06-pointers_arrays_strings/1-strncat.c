#include "holberton.h"

/**
 * _strncat -  function that concatenates two strings.
 * @n: size of character to contatenate
 * @dest: s1
 * @src: s2
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{

	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
	}

	while (c <= b)
	{
		if (n > 0)
		{
		dest[a] = src[c];
		c++;
		a++;
		n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
