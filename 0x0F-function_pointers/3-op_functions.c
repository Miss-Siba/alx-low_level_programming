#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculates the sum of a and b.
 * @a: the first number
 * @b: the second number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the answer of two subtracted numbers.
 * @a: first number
 * @b: second number
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - maltiplies two numbers
 * @a: the first number.
 * @b: the second number.
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 * @a: the first number.
 * @b: the second number.
 * Return: the quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder.
 * @a: The first number.
 * @b: The second number.
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
