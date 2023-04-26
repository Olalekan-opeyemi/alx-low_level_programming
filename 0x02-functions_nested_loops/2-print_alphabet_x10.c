#include "main.h"
/*
 * main - Entry point
 * print_alphabet_x10: print alphabets in small letters
 * multuple times.
 * Return: 0
 */
void print_alphabet_x10(void)

{
	char i;
	int j = 0;	
		while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		_putchar('\n');
		j++;
		}
	}
}
