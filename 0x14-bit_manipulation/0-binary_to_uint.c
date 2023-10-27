#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A string that takes binary number or numbers
 * Return: The converted unsigned integer, or 0 if invalid
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);

		result = 2 * result + (b[index] - '0');
	}

	return (result);
}

