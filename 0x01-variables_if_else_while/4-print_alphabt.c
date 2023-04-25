#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabet
 * in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int j = 'a';

	while (j <= 'z')
	{
		if (j != 'e' && j != 'q')
		{
			putchar(j);
		}
		j++;
	}
	putchar('\n');
	return (0);
}
