#include "hash_tables.h"
/* Nice22 */

/**
 * hash_djb2 - hash function generates a djb2
 * @str: pointer to chars a hash
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int q;

	while ((q = *str++))
		hash = ((hash << 5) + hash) + q; /* hash * 33 + q */

	return (hash);
}
