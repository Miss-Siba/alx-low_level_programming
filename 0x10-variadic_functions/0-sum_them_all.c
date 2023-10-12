#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of numbers.
 * @n: the number of integers
 * @...: variable number of int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int result = va_arg(args, int);

		sum += result;
	}
	va_end(args);

	return (sum);
}

