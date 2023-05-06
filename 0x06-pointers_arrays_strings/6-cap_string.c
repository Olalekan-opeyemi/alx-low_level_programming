#include "main.h"

/**
 * cap_string - string function
 * @str: string pointer
 * Return: str
 */
char *cap_string(char *str)
{
	bool capitalize = true;

	for (int i = 0; str[i] != '\0'; i++)
	{

	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
	str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
	str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')

	{
	capitalize = true;
	}
	else if (capitalize)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 'a' + 'A';
	}
		capitalize = false;
	}
	}
	return (str);
}
