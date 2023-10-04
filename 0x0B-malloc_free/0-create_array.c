#include "main.h"

/**
 * create_array - create array of char.
 * @size: type unsigned int of the memory to print.
 * @c: type char memory value.
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int z;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		p[z] = c;
	return (p);
}
