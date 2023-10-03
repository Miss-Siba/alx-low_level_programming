#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to newly allocated space.
 * @str: new string
 * Return: NULL if str = NULL, _strdup if successful
 */
char *_strdup(char *str)
{
	int i;
	size_t len = strlen(str);
	char *duplicate = (char *)malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);

		return (duplicate);
}

