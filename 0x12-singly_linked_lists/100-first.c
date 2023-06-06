#include <stdio.h>
#include "lists.h"
/**
 *printBeforeMain - Entry function
 */
void printBeforeMain(void)__attribute__((constructor));

void printBeforeMain(void)
{
	printf("You're the beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
