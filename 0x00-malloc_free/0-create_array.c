#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *create_array - function that takes two parameters
 *@size: size of the array
 *@c: array initializer
 *Return: NULL when memory fail or size equals 0,
 *else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *my_array;

	if (size == 0)
	{
		return (NULL);
	}
	my_array = malloc(sizeof(char) * size);

	if (my_array == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		my_array[i] = c;
	}

	return (my_array);
}
