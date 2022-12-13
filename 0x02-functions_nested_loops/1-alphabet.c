#include "main.h"

/**
*main - Entry point
*Description: 'print_alphabet - check the code for Holberton School student
*print_alphabet
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

