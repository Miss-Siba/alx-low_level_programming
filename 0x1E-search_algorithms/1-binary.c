#include "search_algos.h"

/**
 * binary_search -  searches a sorted array, using binary search.
 * @array: array
 * @size: size of the arrar
 * @value: value to search for
 * Return: i
 */
int binary_search(int *array, size_t size, int value)
{
	int lowest = 0;
	int highest = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);
	while (lowest <= highest)
	{
		mid = lowest + (highest - lowest) / 2;
		printf("Searching in array: ");

		for (i = lowest; i <= highest; i++)
		{
			printf("%d", array[i]);
			if (i != highest)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			lowest = mid + 1;
		}
		else
		{
			highest = mid - 1;
		}
	}
	return (-1);
}
