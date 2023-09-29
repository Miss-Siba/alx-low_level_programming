#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: counts the arguments
 * @argv: array of strings containing arguments.
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int product;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;


	printf("%d\n", product);

	return (0);
}
