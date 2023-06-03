#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len - Function
 *@list_h *h: struture name
 *@h: pointer to first node
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
