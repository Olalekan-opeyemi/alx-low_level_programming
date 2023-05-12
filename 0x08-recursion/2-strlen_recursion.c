#include "main.h"

/**
 *_strlen_recursion - Print the lenght of the string.
 *@s: pointer variable.
 *@i: counter variable for the string.
 */
int _strlen_recursion(char* s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return (1 + _strlen_recursion(s + 1));
}
