#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list.
 * @head: pointer
 * @index: unsigned integer
 * Return: node or 0 if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
