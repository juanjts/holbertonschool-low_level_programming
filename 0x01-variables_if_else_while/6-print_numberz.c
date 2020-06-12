#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
**/
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
	putchar(b % 10 +'0');
	}
	putchar('\n');
	return (0);
}
