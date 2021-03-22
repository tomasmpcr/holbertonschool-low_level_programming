#include "lists.h"

/**
*add_nodeint - add the new node in header
*@head: pointer
*@n: is a number
*
*Return: pointer a new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ram;

	ram = malloc(sizeof(listint_t));
	if (ram == NULL)
		return (NULL);

	ram->n = n;
	ram->next = *head;

	*head = ram;

	return (ram);
}
