#include "holberton.h"
/**
 *main - Puts out 'Holberton' followed by a newline
 * _putchar - writes the character c to stdout
 *
 * Return: zero
 */
int main(void)
{
	char string[] = "Holberton";
	int c = 0;

	while (string[c] != '\0')
	{
		_putchar(string[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
