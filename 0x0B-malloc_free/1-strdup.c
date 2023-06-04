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
	int i = 0, p;
	char *ptr_string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
		/*
		*find thé string lenght first
		*to know the amount of memory
		*to be allocated for the new string
		*/
	{
		i++;
	}

	ptr_string = malloc(sizeof(char) * (i + 1));

	if (ptr_string == NULL)
		return (NULL);

	for (p = 0; p <= i; p++)
	{
		ptr_string[p] = str[p];
	}

	return (ptr_string);
}
