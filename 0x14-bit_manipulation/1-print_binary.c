#include "main.h"
#include <stdio.h>

/**
 * print_binary- print the binary representation of a number.
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int shift = 0;
	int flag = 0;

	for (shift = sizeof(unsigned long int) * 8 - 1; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			flag = 1;
		if (flag)

			putchar((n >> shift) & 1 ? '1' : '0');
	}

	if (!flag)
		putchar('0');
}
