#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: number of the elements in a
 */
void reverse_array(int *a, int n)
{
	int i;
	int v;

	for (i = 0; i < n--; i++)
	{
		v = a[i];
		a[i] = a[n];
		a[n] = v;
	}

}
