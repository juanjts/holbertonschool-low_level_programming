#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two numbers
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two numbers
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add two numbers
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - add two numbers
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
