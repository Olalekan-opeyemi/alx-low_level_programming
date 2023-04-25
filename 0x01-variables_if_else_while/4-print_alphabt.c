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
	char j;

	while (j <= 'z')
	{
		if (j == 'e' || j == 'q')
		{
			j++;
			continue;
		}
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
