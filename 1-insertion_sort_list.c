#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                      order using the Insertion sort algorithm.
 *
 * @list: A double pointer to the head of the linked list.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *temp, *current;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = *list;

    while (current != NULL)
    {
        temp = current->next;

        while (temp != NULL && current->n > temp->n)
        {
            current->next = temp->next;

            if (temp->next != NULL)
                temp->next->prev = current;

            temp->prev = current->prev;

            if (current->prev != NULL)
                current->prev->next = temp;
            else
                *list = temp;

            current->prev = temp;
            temp->next = current;

            if (current->next != NULL)
                current->next->prev = current;

            current = temp->prev;
            print_list(*list);
        }

        current = temp;
    }
}
