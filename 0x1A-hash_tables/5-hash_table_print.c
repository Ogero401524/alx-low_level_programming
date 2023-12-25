#include "hash_tables.h"

/**
 * hash_table_print - Prints the content of a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    int first = 1; /* Variable to handle comma placement */

    if (ht == NULL)
        return;

    printf("{");

    for (i = 0; i < ht->size; i++) {
        hash_node_t *current = ht->array[i];

        while (current != NULL) {
            if (first)
                first = 0;
            else
                printf(",\t");

            printf("'%s': '%s'", current->key, current->value);
            current = current->next;
        }
    }

    printf("}\n");
}
