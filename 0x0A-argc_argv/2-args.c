#include<stdio.h>
/**
 * main - prints all arguments it recieves.
 * @argc: counts the arguments
 * @argv: array of string containing arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
			return (0);
}
