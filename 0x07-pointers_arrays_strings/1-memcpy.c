#include "main.h"

/**
 *_memcpy - function that copies memory
 *@dest: where memmory was stores
 *@src: memory to be copied
 @n: number of bytes
 *Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int d = n;

	for (; c < d; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
