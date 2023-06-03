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
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
        {
		        printf("[0] (nil)\n");
	}
		else
	{
			printf("[%d] %s", h->len, h->str);
			count++;
	}
	}
	return (count);
}
