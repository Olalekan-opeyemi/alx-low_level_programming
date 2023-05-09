#include "main.h"

/**
 * _memset - Function
 * @s: pointer to the memory area
 * @n: number of bytes to be filled
 * @b: desired byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; n > 0; j++, n--)
	{
		s[j] = b;
	}
	return (s);
}
