#include "main.h"

/**
 * string_toupper - string to change
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int u;

	u = 0;

	while (n[u] != '\0')
	{
	if (n[u] >= 'a' && n[u] <= 'z')
		n[u] = n[u] - 32;
	u++;
	}
	return (n);
}
