#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - ppal function
 * @argc: counter of parameters
 * @argv: value of parameters in especific memori position
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
