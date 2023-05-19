#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Argument vector
 *Return: always success
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	i = 0;

	if (i < argc)
	{
		printf("%d\n", argc);
		i++;
	}
	return (0);
}
