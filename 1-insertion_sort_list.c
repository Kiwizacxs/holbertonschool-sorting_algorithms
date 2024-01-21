#include "sort.h"

/**
 * insertion_sort_list - Rearranges a doubly linked list of integers
 * in ascending order using the Insertion Sort algorithm.
 * @unordered_list: A pointer to a list that is currently unordered.
 *
 * Description:
 * This function applies the Insertion Sort algorithm to organize
 * a doubly linked list of integers in ascending order. The list is
 * provided through the pointer @unordered_list. The function iterates
 * through the list, comparing and rearranging elements to achieve the
 * desired ordering. The progress of the sorting process is visualized
 * by printing the list at each step.
 *
 * Return: None.
 */
void insertion_sort_list(listint_t **unordered_list)
{
	if (unordered_list == NULL || *unordered_list == NULL || (*unordered_list)->next == NULL)
		return;

	listint_t *current_node;

	current_node = (*unordered_list)->next;

	while (current_node != NULL)
	{
		listint_t *prev_node = current_node->prev;
		listint_t *temp_node = current_node->next;

		for (; prev_node != NULL && prev_node->n > current_node->n; prev_node = prev_node->prev)
		{
			if (prev_node->prev != NULL)
				prev_node->prev->next = current_node;
			else
				*unordered_list = current_node;

			current_node->prev = prev_node->prev;
			current_node->next = prev_node;
			prev_node->prev = current_node;

			if (temp_node != NULL)
				temp_node->prev = prev_node;
		}

		current_node = temp_node;
		print_list(*unordered_list);
	}
}
