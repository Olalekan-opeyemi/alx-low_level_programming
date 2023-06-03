#include <stdlib.h>
#include "lists.h"
/**
 *duplicate_string - Function that acts like stddup
 *add_node_end - Function
 *@head: double pointer
 *@str: string
 *Return: 
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	/*Create a new node*/

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	/*Handle memory allocation failure*/
	return (NULL);
	}
	/*Duplicate the input string*/
	char *str_duplicate = duplicate_string(str);
    if (str_duplicate == NULL)
	{
	/*Handle memory allocation failure*/
	free(new_node);/*Free the previously allocated node*/
	return (NULL);
	}
	/*Set the values of the new node*/
    	new_node->str = str_duplicate;
	new_node->len = 0;
	new_node->next = NULL;
	if (*head == NULL)
	{
	    /*If the list is empty, make the new node the head*/
	*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node*/
	list_t *current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	}

	return new_node;

}
