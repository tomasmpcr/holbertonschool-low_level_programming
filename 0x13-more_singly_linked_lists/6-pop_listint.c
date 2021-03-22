#include "lists.h"

/*
*pop_listint - delete the first element
*@head: the prinsipal node
*
*Return: the first node int
*/
int pop_listint(listint_t **head)
{
	listint_t *ram;
	int n = 0;

	if (head == NULL)
		return (n);

	ram = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(ram);
	return (n);
}
