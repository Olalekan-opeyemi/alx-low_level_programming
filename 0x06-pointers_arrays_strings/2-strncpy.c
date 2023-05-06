#include "main.h"
/**
 * _strncpy - prints the copy of a file
 * @dest: input value
 * @src: input value
 * @n: n bytes from a string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++
	}

	return (dest);
}
