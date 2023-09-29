#include<stdio.h>
/**
 * main - prints number of arguments passed.
 * @arg c: counts command line arguments
 * @arg v: array containing arguements.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
