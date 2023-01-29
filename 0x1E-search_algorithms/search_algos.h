#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Library inclusions */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Struct definitions */

/**
  * struct listint_s - singly linked list
  *
  * @n: Integer
  * @index: Index of the node in a list
  * @next: Pointer to the next node.
  *
  * Description: singly linked node structure for project.
  */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


/**
  * struct skiplist_s - Singly linked list with express lane.
  *
  * @n: Integer.
  * @index: Index of node in list.
  * @next: Pointer to the next node.
  * @express: Pointer to the next node in the express lane.
  *
  * Description: singly linked node structure with an
  * express lane for search algorithms project.
  */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* Function Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /*SEARCH_ALGOS_H */
