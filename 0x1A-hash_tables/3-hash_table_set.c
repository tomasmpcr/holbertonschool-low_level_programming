#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: string used to generate hash value
 * @key: string used to generate hash value
 * @value: string used to generate hash value
 *
 * Return: hash value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head = NULL;
	hash_node_t *new_node = NULL;

	if ((ht == NULL || ht->array == NULL) ||
		(key == NULL || key[0] == '\0') || value == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	head = ht->array[idx];

	for (; head;)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (!head->value)
				return (0);
			return (1);
		}
		head = head->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0)
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		free(head->key);
		return (0)
	}
	new_node->next = NULL;

	if (head)
		new_node->next = head;

	ht->array[idx] = new_node;
	return (1);
}
