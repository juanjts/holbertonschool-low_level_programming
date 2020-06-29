#include "holberton.h"
#include <stdio.h>

/**
 * set_string - Set the value of a pointer
 * @s: the pointer
 * @to: pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
