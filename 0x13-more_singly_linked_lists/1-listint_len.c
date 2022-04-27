#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 *
 * @h: the head of the linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_elements++;
	}
	return (num_of_elements);
}
