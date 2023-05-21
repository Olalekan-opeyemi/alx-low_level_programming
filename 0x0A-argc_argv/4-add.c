#include "main.h"
#include <ctype.h>
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
	int i, j;
	int sum_num = 0;


		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum_num += atoi(argv[i]);
		}
	printf("%i\n", sum_num);
	return (0);
}
