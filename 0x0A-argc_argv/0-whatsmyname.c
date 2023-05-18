#include "main.h"

#include <unistd.h>

int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Argument Vector
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	
	i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}