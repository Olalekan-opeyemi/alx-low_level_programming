#include "main.h"
#include <string.h>

/**
 *print_rev - function to reverse a string
 *@s: string pointer
 */
void print_rev(char *s)
{
	int p;
	int v;
	char rev;

	for (p = 0, v = strlen(s) - 1; p < v; p++, v--)
	{
		rev = s[p];
		s[p] = s[v];
		s[v] = rev;
	}
}
