#include "main.h"

/**
*main - Entry point
*Alphabet game in _C laguage
*Description: 'the program's description'
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

