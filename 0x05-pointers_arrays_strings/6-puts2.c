#include "holberton.h"

/**
 * puts2 - print reverse characters.
 * @str: validate the character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0' ; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
