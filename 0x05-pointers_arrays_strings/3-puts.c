#include "main.h"

/**
 * _puts - To print the string and then a new line
 * @str: the string variable
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\O')
	{
		_putchar(*str++);
		_putchar('\n);
}
