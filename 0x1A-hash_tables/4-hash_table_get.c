#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table.
 * @key: The key string.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *carrent;

	if (ht == NULL || key == NULL)
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);

	carrent = ht->array[index];

	/* Traverse the linked list at the calculated index */
	while (carrent != NULL) {
		if (strcmp(carrent->key, key) == 0)
			return carrent->value;
		carrent = carrent->next;
	}

	return NULL;
}
