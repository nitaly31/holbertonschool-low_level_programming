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
|[0-print_dlistint.c](https://github.com/nitaly31/holbertonschool-low_level_programming/blob/master/0x17-doubly_linked_lists/0-print_dlistint.c) | Function that prints all the elements of a list. |
|[1-dlistint_len.c](https://github.com/nitaly31/holbertonschool-low_level_programming/blob/master/0x17-doubly_linked_lists/1-dlistint_len.c)| Function that prints the count of all the elements of a list.|
|[]()| |
|[]()| |
|[]()| |
|[]()| |
|[]()| |
|[]()| |
|[]()| |
|[]()| |
|[]()| |
