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
	int j = 0;

	for (; n > 0, j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
