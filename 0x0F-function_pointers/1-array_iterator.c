#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given as a parameter.
 * @size: size of array
 * @action: pointer to the function.
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

