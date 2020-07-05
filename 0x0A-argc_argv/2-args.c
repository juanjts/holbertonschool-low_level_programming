#include <stdio.h>
#include "holberton.h"

/**
 * main - ppal function
 * @argc: counter of parameters
 * @argv: value of parameters in especific memori position
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
