#include <stdio.h>
/**
 * main - start of the program
 *
 * Return: nothing if successful
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
