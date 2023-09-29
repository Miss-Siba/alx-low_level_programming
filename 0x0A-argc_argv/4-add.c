#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers.
 * @argc: Counts the arguments
 * @argv: Array of strings containing the arguments.
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{

	for (i = 1; i < argc; i++)
	{
	char *endptr;
	int num = strtol(argv[i], &endptr, 10);

	if (*endptr != '\0' || num < 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += num;
	}
	printf("%d\n", sum);
	}
	return (0);
}

