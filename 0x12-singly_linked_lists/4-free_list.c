#include "lists.h"

/**
 *free_list - function free
 *@head: pointer
 *
 *Return: void
*/
void free_list(list_t *head)
{
	list_t *ram = head;

	for (; 1 == 1;)
	{
		ram = head;

		if (head == NULL)
			break;

		head = head->next;

		free(ram->str);
		free(ram);
	}
}
