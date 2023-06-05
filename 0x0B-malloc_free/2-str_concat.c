#include <stdlib.h>
#include "main.h"

/**
 *str_concat - Function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *string_combined;
	int len1 = 0, len2 = 0, s, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	string_combined = malloc(sizeof(char) * (len1 + len2 + 1));

	if (string_combined == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < len1;)
	{
		string_combined[s] = s1[s];
		s++;
	}
	for (p = 0; p < len2;)
	{
		string_combined[s + p] = s2[p];
		p++;
	}
	return (string_combined);
}
