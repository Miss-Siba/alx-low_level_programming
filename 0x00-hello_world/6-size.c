#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu byetes\n", sizeof(long));
	printf("Sze of float: %zu bytes\n", sizeof(float));

	return (0);
}
