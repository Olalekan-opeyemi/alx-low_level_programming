#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Return: 0 when equals to 3 arguments,else 1.
 *@argc: Argument count
 *@argv: Argument Vector
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);
		int multiply = arg1 * arg2;

		printf("%d\n", multiply);
	}
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
