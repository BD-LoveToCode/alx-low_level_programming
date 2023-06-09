#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Using pointer to function to print name
 * @name: name
 * @f: function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
