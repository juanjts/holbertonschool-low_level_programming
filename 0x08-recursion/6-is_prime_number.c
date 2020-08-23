#include "holberton.h"
int prim_number(int num, int b);
/**
 * is_prime_number - know a prime number
 * @n: the number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prim_number(n, 2));
}

/**
 * prim_number - is prime or not
 * @num: the number
 * @b: counter
 * Return: int
 */

int prim_number(int num, int b)
{
	if (num == b)
		return (1);
	if (num % b == 0)
		return (0);
	return (prim_number(num, b + 1));
}
