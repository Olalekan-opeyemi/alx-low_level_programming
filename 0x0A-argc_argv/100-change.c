#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argv: Argument Vector
 * @argc: Argument Count
 * Return: 1 if theres an error, 0 if it's successful or cents is negative.
 */
int main(int argc, char **argv)
{

	int cents, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	change += cents / 25;/*
			* find how many times 25 can go in the value
			*of cent and add the result to change
			*/
	cents %= 25;/*find if theres any remainder in the value of
			*cents using modulus 25
			*/
	change += cents / 10;/*cents is now the remainder from
				*the operation above , if any.
				*/
	cents %= 10;

	change += cents / 5;
	cents %= 5;

	change += cents / 2;
	cents %= 2;

	change += cents / 1;
	cents %= 1;

	change += cents;

	printf("%d\n", change);
	return (0);
}
