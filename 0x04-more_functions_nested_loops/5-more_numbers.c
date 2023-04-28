#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 of 14, followed by a new line.
 * return: void
 */
void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{

	for (n = 0; n <= 14; n++)
	{
	if (n > 9)
	{
		_putchar('0' + (n / 10));
	}
		_putchar('0' + (n % 10));
	}
	_putchar('\n');
	}
}
