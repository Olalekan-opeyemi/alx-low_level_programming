#include "main.h"

/**
 * print_triangle - Print a triangle.
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (n = 1; n <= size; n++)
	{
		for (m = 1; m <= n; m++)
	{
		putchar(35);
	}
		putchar('\n');
	}
}
