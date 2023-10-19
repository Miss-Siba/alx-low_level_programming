#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node.
 * @str: pointer.
 * @head: double pointer to the list_t list
 * Return: addess to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node2;

	if (str == NULL)
		return (NULL);

	node2 = malloc(sizeof(list_t));
	if (node2 == NULL)
		return (NULL);

	node2->str = strdup(str);
	if (node2->str == NULL)
	{
		free(node2);
		return (NULL);
	}
	node2->len = strlen(node2->str);
	node2->next = *head;
	*head = node2;

	return (node2);
}
