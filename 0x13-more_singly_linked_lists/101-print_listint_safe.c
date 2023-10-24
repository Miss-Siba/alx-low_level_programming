#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *apple, *sauce;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	apple = head->next;
	sauce = (head->next)->next;

	while (sauce)
	{
		if (apple == sauce)
		{
			apple = head;
			while (apple != sauce)
			{
				node++;
				apple = apple->next;
				sauce = sauce->next;
			}
			apple = apple->next;
			while (apple != sauce)
			{
				node++;
				apple = apple->next;
			}
			return (node);
		}
		apple = apple->next;
		sauce = (sauce->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{

	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

