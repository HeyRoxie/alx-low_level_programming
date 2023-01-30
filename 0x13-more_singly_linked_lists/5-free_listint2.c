#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
