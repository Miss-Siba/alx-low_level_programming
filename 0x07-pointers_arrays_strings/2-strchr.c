#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: The string to search
 * @c: The character to locate.
 * Return: s or NULL if nothing found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
		return (&s[i]);
		}
	}
	return (NULL);
}
