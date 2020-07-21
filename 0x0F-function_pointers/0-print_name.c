#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - send a parameter to the functionpointer
 * @name: name of the person
 * @f: function painter
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != 0 && f != 0)
	{
		f(name);
	}
}
