#include "hash_tables.h"

/**
* hash_table_create - Function that creates a hash table.
*   
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tabla = NULL;

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

	return (tabla);
}
