#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list.
 * @h: A Singly linked lists.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t k;
	const list_t *tmp;

	k = 0;
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			tmp = tmp->next;
			k++;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			k++;
		}
	}
	return (k);
}
