#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: struct
 *
 * Description: frees a list
 * Return: free
 */
void free_listint(listint_t *head)
{
	listint_t *traverse

	while (head)
	{
		traverse = head->next;
		free(head);
		head = traverse;
	}
}
