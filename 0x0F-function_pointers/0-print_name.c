#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name pointer
 * @name: string to add to the argument
 * @f: pointer function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
