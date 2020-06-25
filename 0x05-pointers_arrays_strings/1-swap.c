#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: is the pointer
 * @b: second pointer
 * Return: if is need
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
