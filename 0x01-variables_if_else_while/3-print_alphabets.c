#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Description: program that prints the alphabet
 * in lowercase, and then in uppercase
 * Return: always 0
 */
int main(void)
{
	char c;
	char h;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	for (h = 'A'; h <= 'Z'; h++)
	{
		putchar(h);
	}
	return (0);
}
