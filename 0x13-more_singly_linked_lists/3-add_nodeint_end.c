#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 *
 * @head: the head of the linked list
 * @n: nth element
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node_end, *temp;

(void)temp;

new_node_end = malloc(sizeof(listint_t));

if (new_node_end == NULL)
return (NULL);

new_node_end->n = n;
new_node_end->next = NULL;
temp = *head;

if (*head == NULL)
*head = new_node_end;
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node_end;
}
return (*head);
}
