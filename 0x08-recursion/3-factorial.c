#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: the given number
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n == 0)/*when the value of n = 0,print 0*/
	{
		return (0);
	}
	if (n == 1)/*when the value of n = 1,print 1*/
	{
		return (1);
	}
	if (n < 0)/*when its a negative number print -1*/
	{
		return (-1);
	} /*else*/
	return (n * factorial(n - 1));/*print the factorial*/
}
