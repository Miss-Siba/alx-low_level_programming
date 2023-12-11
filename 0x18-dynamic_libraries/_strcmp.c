#include "main.h"
#include<string.h>

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 = s2, >0 if s1 > s2, 0< if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' || s2[n] != '\0'; n++)
	{
		if (s1[n] != s2[n])
		{
			if (s1[n] > s2[n])
				return (s1[n] - s2[n]);
			else if (s2[n] > s1[n])
				return (s1[n] - s2[n]);
		}
	}
	return (0);
}
