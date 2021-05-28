#include "hash_tables.h"

/**
* hash_table_get - Function that creates a hash table.
* @ht: l
* @key: l
* --------------------------------------------------
* Return: fin
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *head = NULL;

	if ((ht == NULL || ht->array == NULL) ||
		(key == NULL || key[0] == '\0'))
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	head = ht->array[idx];

	for (; head;)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
