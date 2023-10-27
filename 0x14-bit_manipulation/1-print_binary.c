#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number
 * @n: The decimal number to be converted and printed as binary
 */

void print_binary(unsigned long int n)
{
	int bit_position, check_zero = 0;
	unsigned long int new;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
		new = n >> bit_position;
		if (new & 1)
		{
			_putchar('1');
			check_zero++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
