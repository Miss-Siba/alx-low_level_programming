#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long int: %zu byetes\n", sizeof(long int));
	printf("Size of long longint: %zu bytes\n", sizeof(long long int));
	printf("Sze of float: %zu bytes\n", sizeof(float));

	return (0);
}
