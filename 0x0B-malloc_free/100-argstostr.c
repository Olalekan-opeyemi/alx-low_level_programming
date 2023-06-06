#include <stdlib.h>
#include "main.h"

/**
 *argstostr - Function
 *@ac: argument count
 *@av: argument vector
 *Return: pointer on success
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
