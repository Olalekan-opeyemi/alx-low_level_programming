#include "main.h"

/**
 * print_alphabet_x10 - Make small alphabets x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z';)
		{
		_putchar(i);
		i++;
		}
		_putchar('\n');
		j++;
	}
}
