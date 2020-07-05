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
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
