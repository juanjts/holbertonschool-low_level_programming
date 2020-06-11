#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
**/
int main(void)
{
	char c, M;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (M = 'A'; M <= 'Z'; M++)
		putchar(M);
	putchar('\n');
	return (0);
}
