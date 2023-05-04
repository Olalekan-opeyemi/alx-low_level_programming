#include "main.h"

/**
 *_strlen - Function
 *@s: pointer character.
 *Return: return lenght of len
 */

int _strlen(char *s)
{
	int l = 0;/*initialize variable l to act as a string counter*/

	while (*s != '\0')/*enters a loop to continue as
			    *far as \0 is nit reachrd in the string
			    */
	{
		l++;/*increment l in the loop*/
		s++;/*increment s the pointer to point to
		      *the next character of the string
		      */
	}
	return (l);/*return the value of l which is the lenght of the string*/
}
