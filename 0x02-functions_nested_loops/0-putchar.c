/**
*main - Entry point
*Description: 'the program's description'
*Return: Always 0 (Success)
*/

#include "main.h"

int main (void)
{
	char c[9] = "_putchar";
	int i =0;
	while (i < 8)
	{
		_putchar (c[i]);
		i++;
	}
	
	_putchar ('\n');
	return (0);

}
