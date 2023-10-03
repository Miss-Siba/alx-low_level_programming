#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - pointer contains contents of s1 and s2 then null.
 * @s1: string 1.
 * @s2: string 2.
 * Return: NULL if failed, or string.
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
