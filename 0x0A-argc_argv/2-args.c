#include <unistd.h>
/**
 *_putchar - Function
 *@c: character to print
 *Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>
#include "main.h"

/**
 *main - Entey point
 *@argc: Argument count
 *@argv: Argument variable
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
