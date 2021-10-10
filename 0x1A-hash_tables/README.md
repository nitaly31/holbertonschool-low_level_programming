# Project 0x1A. C - Hash tables 📚

### :pencil2: Description
***
The hash table is a data structure that associates keys or keys with values.
The main operation that it efficiently supports is the search: it allows access
to the stored elements from a generated key.

### :clipboard: Requirements
***
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library

### 🎨 Style
***
* Code should use the Betty style.

### :rotating_light: More Info
***
#### Data Structures
```C
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

### 🎯 Tasks
***
Mandatory:
| Files | Description |
| --- | --- |
| [0-hash_table_create.c]() | Function that creates a hash table. |
| [1-djb2.c]() | hash function implementing the djb2 algorithm. |
| [2-key_index.c]() |Function that gives you the index of a key. |
| [3-hash_table_set.c]() | Function that adds an element to the hash table. |
| [4-hash_table_get.c]() | Function that retrieves a value associated with a key. |
| [5-hash_table_print.c]() | Function that prints a hash table. |
| [6-hash_table_delete.c]() | Function that deletes a hash table. |
