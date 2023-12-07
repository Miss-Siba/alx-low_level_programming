#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node2;
	dlistint_t *h;

	node2 = malloc(sizeof(dlistint_t));
	if (node2 == NULL)

		return (NULL);

	node2->n = n;
	node2->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	node2->next = h;

	if (h != NULL)

		h->prev = node2;
	*head = node2;

	return (node2);
}
