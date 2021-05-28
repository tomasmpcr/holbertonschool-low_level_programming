#include "hash_tables.h"

/**
* hash_table_create - Function that creates a hash table.
* @size: l
* --------------------------------------------------
* Return: fin
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tabla = NULL;
	unsigned long int i;

	tabla = malloc(sizeof(hash_table_t));
	if (!tabla)
	{
		return (NULL);
	}

	tabla->size = size;
	tabla->array = malloc(sizeof(hash_node_t **) * size);
	if (!tabla->array)
	{
		free(tabla);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		tabla->array[i] = NULL;

	return (tabla);
}
