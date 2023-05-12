#include "main.h"

/**
 * _pow_recursion - Prints the power of a given number
 * @x: the base number.
 * @y: the value of times x would be raised
 * Return: The value of X raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
