#include <stdio.h>
#include "holberton.h"

/*
* main - ppal function
* @argc: counter of parameters
* @argv: value of parameters in especific memori position
* return: zero
*/
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s \n", argv[0]);	
	}
	return 0;
}
