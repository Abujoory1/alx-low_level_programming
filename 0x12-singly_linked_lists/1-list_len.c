#include "lists.h"

/**
 * list_len - find the list length.
 * @h: A pointer to the head of the list
 * Return: length of the node
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
