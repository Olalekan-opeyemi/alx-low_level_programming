#include "main.h"

/**
 *_strcat - concatenate two strings
 *@dest: input value
 *@src: input value
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int f;
	int d;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[f] = src[d];
		f++;
		d++;
	}

	dest[f] = '\0';
	return (dest);
}
