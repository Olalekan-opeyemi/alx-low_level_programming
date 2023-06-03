#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *print_list - Function
 *@list_t *h: data structure
 *@h: pointer to first node
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)

{
	size_t count;

	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	for (count = 0; h != NULL; h = h->next)
	{
		printf("[%u] %s", h->len, h->str);
		count++;
	}
	return (count);
}
