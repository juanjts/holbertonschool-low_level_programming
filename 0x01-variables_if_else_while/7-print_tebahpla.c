#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
**/
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
