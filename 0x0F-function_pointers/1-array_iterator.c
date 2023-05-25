#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - Function for the array iterator
 *@array: int pointer
 *@size: size of the array
 *@action: pointer to the function that iterates the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
