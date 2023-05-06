#include "main.h"

/**
 * leet - using leet speak to encode.
 * @n: input value
 * Return: n
 *
 */
char *leet(char *n)
{
	int l, t;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (t = 0; t < 10; t++)
		{
			if (n[l] == s1[t])
			{
				n[l] = s2[t];
			}
		}
	}
	return (n);
}
