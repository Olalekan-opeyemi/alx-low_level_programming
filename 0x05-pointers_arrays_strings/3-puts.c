#include "main.h"

/**
 * _puts - To print the string and then a new line
 * @str: the string variable
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\O')	/*points to the string as long as the string isn't equal to the last digit /0*/
	{
		_putchar(*str++);	/*move pointer to next character as far as condition stays true*/
		_putchar('\n');		/*print a new ling after string has been printed on stdout*/
	}
}
