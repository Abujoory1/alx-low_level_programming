#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a character string
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);

}

/**
 * add_node_end - Add a new node to the end of a linked list.
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be stored in the new node
 * Return: A pointer to the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp_n_d;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
	}
	else
	{
		tmp_n_d = *head;
		while (tmp_n_d->next)
			tmp_n_d = tmp_n_d->next;
		{
			tmp_n_d->next = newnode;
		}
	}
	return (newnode);
}
