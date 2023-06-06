#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *my_strlen - function that finds lenght of string
 * @str: string
 * Return: len
 */
size_t my_strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 *argstostr - Function
 *@ac: argument count
 *@av: argument vector
 *Return: pointer that concatenates argumenst
 */
char *argstostr(int ac, char **av)
{
	size_t totalLenght = 0, currentSpot = 0;
	int s, p;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*to find the amount of argument passed*/
	for (s = 0; s < ac; s++)
	{
		totalLenght = my_strlen(av[s]) + 1;
	}
	concat = (char *)malloc(sizeof(char) * (totalLenght + ac));

	if (concat == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (p = 0; av[s][p] != '\0'; p++)
	{
		concat[currentSpot++] = av[s][p];
	}
		if (s != ac - 1)
	{
		concat[currentSpot++] = '\n';
	}
	}
	concat[currentSpot] = '\0';
	return (concat);
}
