#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 * @key: string used to generate hash value
 * @size: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int idx;

    idx = hash_djb2(key) % size;

    return (idx);
}
