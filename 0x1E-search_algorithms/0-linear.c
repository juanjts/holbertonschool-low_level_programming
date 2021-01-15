#include "search_algos.h"

/**
 * function that searches for a value in an array of integers using th
 * @array: array
 * @size: size
 * @value: value
 * Return: index or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (!array)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}

	return (-1);
}
