#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of value in array, or -1.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_step = (int)sqrt(size);
	int prev = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (array[(int)fmin(jump_step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = jump_step;
		if (prev >= (int)size)
		{
			return (-1);
		}
		jump_step += (int)sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, jump_step);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == fmin(jump_step, (int)size))
		{
			return (-1);
		}
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}

