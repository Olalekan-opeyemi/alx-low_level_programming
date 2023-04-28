#include "main.h"

/**
 * print_line - prints straight line on the terminal
 * return: 0
 * @n: character to check
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	else
	{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
	}
}
