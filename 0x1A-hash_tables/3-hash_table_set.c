#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	hash_node_t *new_node = NULL;
	unsigned long int key_idx = 0;
	char *new_key = NULL;
	char *new_value = NULL;

	if (!ht || !(ht->array) || !key)
		return (0);
	key_idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[key_idx];
	new_value = strdup(value);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = new_value;
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_key = strdup(key);
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;
	return (1);
}
