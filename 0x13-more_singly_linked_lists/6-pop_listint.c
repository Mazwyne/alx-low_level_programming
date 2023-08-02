#include "lists.h"

/**
 * pop_listint - will delete the head node of a list that is linked
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that were deleted,
 * or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
