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
 * add_node - Add a new node at the beginning
 * @head: head of node
 * @str: string to stored in the new node
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
