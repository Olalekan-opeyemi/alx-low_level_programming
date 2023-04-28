#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: character to be checked
 * return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	else
	{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
