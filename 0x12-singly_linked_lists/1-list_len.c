#include "lists.h"

/**
 * list_len - returnsthe number of elements in a linked list_t list. 
 * @h - pointer
 * return: e (Number of elelments)
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h ->next;
	}
	return (e);
}


