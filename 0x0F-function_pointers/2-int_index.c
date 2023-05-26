#include "function_pointers.h"
/**
 * int_index - return index value if the comparison is true, else return -1
 * @array: The array
 * @size: Represents size of elements in array
 * @cmp: the pointer to function of one out of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
		{
			return (c);
		}
	}
	return (-1);
}
