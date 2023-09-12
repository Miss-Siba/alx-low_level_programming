#include "main.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * _abs - computes the value of an integer.
 * @n: absolute value of an integer.
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}

	return (n);

}
