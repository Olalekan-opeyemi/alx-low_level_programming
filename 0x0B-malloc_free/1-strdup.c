#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - Function to copy string
 *@str: pointer to string
 *ptr_string: pointer to the new string
 *Return: pointer to new string copied
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr_string;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr_string = malloc(sizeof(char) * (i + 1));

	if (ptr_string == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
	{
		ptr_string[i] = str[i];
	}

	return (ptr_string);
}
