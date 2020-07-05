#include <stdio.h>

/*
* main - ppal function
* @argc: counter of parameters
* @argv: value of parameters in especific memori position
* return: zero
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);  
	}
	return 0;
}
