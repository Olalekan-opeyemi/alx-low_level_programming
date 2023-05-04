#include "main.h"
#include <string.h>

/**
 *print_rev - function to reverse a string
 *@s: string pointer
 */
void print_rev(char *s)
{
	int p;

	for (p = strlen(s) - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
		_putchar('\n');
}
