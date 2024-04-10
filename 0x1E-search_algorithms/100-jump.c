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
	size_t i, jump, jump_step;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	/* Calculate the jump step size */
	jump_step = sqrt(size);

	/* Perform the jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store the previous jump position */
		i = jump;

		/* Update the jump position */
		jump += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search within the identified range */
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Check if the value is found and return the corresponding index */
	return (array[i] == value ? (int)i : -1);
}
