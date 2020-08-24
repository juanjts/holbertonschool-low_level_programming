#include <stdio.h>
/**
 * main - entry point
 * Return: int
 */

int main(void)
{
	int num2;
	int num1;

	for (num1 = 48; num1 <= 57 ; num1++)
	{
		for (num2 = num1 + 1 ; num2 <= 57 ; num2++)
		{
			putchar (num1);
			putchar (num2);

			if (num1 == 56 && num2 == 57)
			{
				putchar ('\n');
				break;
			}
			putchar (',');
			putchar (' ');
		}
	}
	return (0);
}
