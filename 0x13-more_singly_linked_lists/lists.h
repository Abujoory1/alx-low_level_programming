#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: intiger
 * @next: points to the next node
 *
 * Discription: singly linked list node structure for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}
listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
