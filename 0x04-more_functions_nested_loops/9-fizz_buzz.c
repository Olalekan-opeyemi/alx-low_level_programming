#include "stdio.h"

/**
 * main - Entry point
 * Description: print multiples if 3,5
 * Return: 0
 */
int main(void)
{
	int i = 0, n = 0,  m = 0;

	for (i = 1; i <= 100; i++)
	{
		n = i % 3;
		m = i % 5;

		if (n == 0 && m == 0)
		{
			printf("FizzBuzz");
		}
		else if (m == 0 && n != 0)
		{
			printf("Buzz");
		}
		else if (n == 0 && m != 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
