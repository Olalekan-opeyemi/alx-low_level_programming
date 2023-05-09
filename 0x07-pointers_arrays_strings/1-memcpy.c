#include "main.h"

/**
 *_memcpy - function that copies memory
 *@dest: where memmory was stores
 *@src: memory to be copied
 *@n: number of bytes
 *Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c;
	int d = n;

	for (c = 0; c < d; c++, n--)
	{
		dest[c] = src[c];
	}
	return (dest);
}
