#include "search_algos.h"

/**
 * linear_search - earches for a value in an array using Linear search
 * @array: array
 * @size: size of array
 * @value: value at index
 * Return: i
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
