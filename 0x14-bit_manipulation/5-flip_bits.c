#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             from one number to another
 * @n: Starting number
 * @m: Ending number
 *
 * Return: The number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int xor_result = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		if ((xor_result >> index) & 1)
			count++;
	}

	return (count);
}
