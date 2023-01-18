#include "function_pointer.h"

/*
 * print_name - print the name
 * @name: name's main
 * @f: void function
 */

/*
 * Nick 
 */

void print_name(char *name, void (*f)(char *))
{
    if (name && f)
    {
        f(name);   
    }
}
