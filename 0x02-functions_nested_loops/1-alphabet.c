#include "main.h"

/**
*main - Entry point
*Description: 'print_alphabet - check the code for Holberton School students'
*Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

