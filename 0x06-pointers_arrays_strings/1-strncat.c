#include "main.h"

/**
 *_strncat - concatenate strings.
 *@dest: input value
 *@src: input value
 *@n: input value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int f;
	int d;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[f] = src[d];
		f++;
		d++;
	}
	dest[f] = '\0';
	return (dest);
}
