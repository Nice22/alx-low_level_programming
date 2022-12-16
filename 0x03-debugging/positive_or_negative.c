#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - Get a random number and print the number
 * and if it is positive, negative, or zero
 * @i: number
 * Return: void
 */

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
}
