#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nide - Function
 *head: node starting point
 *str: string elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;
	char *strptr;
	const char *temp;
	temp = str;

	if(str == NULL)
	{
		return(0);
	}

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	new_node = malloc(sizeof(list_t));
	new_node->str = malloc((len + 1) * sizeof(char));

        if (new_node->str == NULL)
        {
                free(new_node);
                return (NULL);
        }

	strptr = new_node->str;
	while(*str != '\0')
	{
		*strptr = *str;
		str++;
		strptr++;
	}
	*strptr = '\0';

	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	free_list(*head);
	return (new_node);
}
