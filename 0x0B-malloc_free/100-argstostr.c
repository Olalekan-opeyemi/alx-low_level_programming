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
 *my_strcpy - Function that copies a string
 * @src: holder of string
 * @dest: holder of string
 *Return: dest
 */
char *my_strcpy(char *dest, const char *src)
{
	int s = 0;

	while (src[s] != '\0')
	{
	dest[s] = src[s];
	s++;
	}
	return (dest);
}
/**
 *argstostr - Function
 *@ac: argument count
 *@av: argument vector
 *Return: pointer that concatenates argumenst
 */
char *argstostr(int ac, char **av)
{
	int totalLenght = 0;
	int currentSpot = 0, s = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*to find the amount of argument passed*/
	while (s < ac)
	{
		totalLenght = my_strlen(av[s]) + 1;
		s++;
	}
	concat = (char *)malloc(sizeof(char) * (totalLenght + 1));
	if (concat == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
		my_strcpy(concat + currentSpot, av[s]);
		currentSpot += my_strlen(av[s]);
		concat[currentSpot++] = '\n';
	}
	concat[currentSpot] = '\n';
	return (concat);
}
