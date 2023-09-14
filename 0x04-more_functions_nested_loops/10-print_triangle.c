#include "main.h"

/**
 * print_triangle - Prints a triangle made of '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, t;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= 1; j--)
		{
			_putchar(' ');
		}
		for (t = 1; t <= i; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}

