#include "lists.h"

/*
*free_listint - feree int the struct
*@head: pointer to the struct
*
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *ram;

	for (; 1 == 1;)
	{
		ram = head;
		head = (*head).next;
		free(ram);
		if (head == NULL)
			break;
	}
}
