#include "main.h"

/**_print_rev_recursion - Write a function that prints the reverse 
 * of a string,followed by a new line.
 *
 *@s: the pointer to string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')/*the base case*/
	{
	_print_rev_recursion(s + 1);
				/**
				 *to move forward to the next
				*character on the string before it
                                *gets terminated by \0
				*/
	_putchar(*s--);
	}
}
