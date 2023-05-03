#include "main.h"

/**
 * swap_int - Swap value of two integers
 * @a: character to swap
 * @b: character to swap
 * Return: a, b
 */

void swap_int(int *a, int *b)
{
	int unknown = *a;  /*store the unknown value of *a*/
	*a = *b;	/* *a and *b are equal */
	*b = unknown;	/* *a's value is overwrirten with that of *b*/
}
