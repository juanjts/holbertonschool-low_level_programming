#include "holberton.h"

/**
 * rev_string - print reverse characters.
 * @s: validate the character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c = 0, a = 0, Aux;


	while (s[c] != '\0')
	{
		c++;
	}

	c = c - 1;

	while (c > a)
	{
		Aux = s[c];
		s[c] = s[a];
		s[a] = Aux;
		c--;
		a++;
	}
}
