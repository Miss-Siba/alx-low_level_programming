#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;


	if (!h || !*h)
		return (0);

	while (*h)
	{

		if (*h < (*h)->next)
		{
			listint_t *next = (*h)->next;

			free(*h);
			*h = next;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	return (len);
}
