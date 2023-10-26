#include "main.h"
/**
 * binary_to_uint - coverts a binary to an unsigned int.
 * @b: pointer to a string.
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) | (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}

