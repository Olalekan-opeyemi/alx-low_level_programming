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
	int program_argc = argc - 1;

	printf("%d\n", program_argc);
	return (0);
}
