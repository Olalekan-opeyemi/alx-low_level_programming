#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - Function that takes any string and any pointer
 *@name: pointer to any string passed to it
 *@f: function pointer to any function passed to it
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
