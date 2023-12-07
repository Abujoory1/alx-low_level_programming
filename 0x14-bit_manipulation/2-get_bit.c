#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number
 * @n: The decimal number
 * @index: The index of the bit to be retrieved
 *
 * Return: The value of the bit at the given index, or -1 if index is invalid
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;
	return (bit_value);
}