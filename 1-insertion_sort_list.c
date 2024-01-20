#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *current = *list;

	if (current == NULL || current->next == NULL)
		return;
	while (current != NULL)
	{
		temp = current->next;
		if (temp != NULL && current->n > temp->n)
		{
			current->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next = temp->prev;
			}
			temp->prev = current->prev;
			if (current->prev != NULL)
                current->prev->next = temp;
            else
                *list = temp;
			current->prev = temp;
			temp->next = current;
			current = temp->prev;
			print_list(*list);
		}
		else
			current = temp;
	}
}
