#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints its own name.
 * @argc: The number of command-line arguments (unused).
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
