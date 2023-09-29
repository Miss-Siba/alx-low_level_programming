#include<stdio.h>
/**
 * main - prints number of arguments passed.
 * @argc: counts command line arguments
 * @argv: array containing arguements.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
