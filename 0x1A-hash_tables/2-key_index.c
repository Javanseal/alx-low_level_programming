#include "hash_tables.h"

/**
 * key_index - find the  index value
 *      each should be saved in array of a hash table.
 * @key: key to get the index.
 * @size: size of the array of the hash table.
 *
 * Return:index of the key.
 * Description: the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
