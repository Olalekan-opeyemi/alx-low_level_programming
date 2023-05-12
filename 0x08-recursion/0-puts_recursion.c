#include "main.h"

/**
 *_puts_recursion - Write a function that prints a
 *string, followed by a new line.
 *
 *@s: the pointer to string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')/*the base case*/
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);/**
				*to move forward to the next
				*character on the string before it
				*gets terminated by \0
				*/
}
