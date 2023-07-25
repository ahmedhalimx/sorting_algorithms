#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list
 *                       with the insertion sort algorithm
 * @list: doubly linked list
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL, *tmp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = *list;
	head = head->next;
	while (head != NULL)
	{
		while (head->prev && head->n < (head->prev)->n)
		{
			tmp = head;

			if (head->next)
				(head->next)->prev = tmp->prev;

			(head->prev)->next = tmp->next;
			head = head->prev;
			tmp->prev = head->prev;
			tmp->next = head;

			if (head->prev)
				(head->prev)->next = tmp;

			head->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;

			print_list(*list);
			head = head->prev;
		}
		head = head->next;
	}
}
