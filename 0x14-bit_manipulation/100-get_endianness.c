#include <stdio.h>
#include "holberton.h"
/**
 *get_endianness - checks the endianness.
 *
 *Return: void
 */
int get_endianness(void)
{
	unsigned int dig = 1;
	char *c = (char *) &dig;

	if (*c)
	{
		return (1);
	}
	return (0);
}
