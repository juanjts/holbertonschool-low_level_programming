#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - ppal function
 * issymbol - is an alternative function to compares digit in assci values
 * @argc: counter of parameters
 * @argv: value of parameters in especific memori position
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{

		if (argv[i] == '\0')
		{
			printf("0\n");
		}
		else if (issymbol(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d", sum);
	return (0);
}

int issymbol(char* s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (!isdigit(s[n]))
		{
			return (1);
		}
	}
	return (0);
}
