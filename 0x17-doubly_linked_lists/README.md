# Project 0x17. C - Doubly linked lists :books:
***

### Requirements
***
* Files will be interpreted/compiled on Ubuntu 20.04 LTS using `python3` (version 3.8.5)
* The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`.
* All your header files should be include guarded.

### :art: Style
***
* Code should use the `Betty` style.

### :bangbang: More Info
***
This is the structure with which to work throughout this project:
```C
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

### :dart: Tasks
***
#### Mandatory:

| File | Description |
| --- | --- |
| | |