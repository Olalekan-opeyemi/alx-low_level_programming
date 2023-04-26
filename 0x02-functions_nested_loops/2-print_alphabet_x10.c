#include "main.h"
/*
 * print_alphabet_x10 - Entry point.
 * Description: print alphabets in small letters
 * multiple times.
 * Return: 0
 */
void print_alphabet_x10(void)

{
	char i;
	int j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z';)
		{
		_putchar(i);
		i++;
		}
		_putchar('\n');
		j++;
	}
}
