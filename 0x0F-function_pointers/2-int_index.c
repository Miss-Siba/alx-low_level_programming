#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array
 * @cmp: pointer
 * @size: number of elements in the array.
 * Return: -1 if no element, if <= 0 return -1, else pointer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))

			return (i);
	}
	return (-1);
}
