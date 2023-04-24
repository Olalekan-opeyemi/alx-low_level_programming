#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that assign a random number each time executed
 * Return: 0
 */
int main(void)
{
	int n;
	int F;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	F = n % 10;
	if (F > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, F);
	}
	else if (F == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, F);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, F);
	}
	return (0);
}
