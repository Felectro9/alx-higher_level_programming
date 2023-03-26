#include "lists.h"

/**
 * check cycle - checks if a list has
 * a cycle
 * @list: pointer in list
 * Return: 0 if there is no cycle
 * 1 if there is cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *p2;
	listint_ *prev;

	p2 = list;
	prev = list;
	while (list && p2 && p2->next)
	{
		list = list->next;
		p2 = p2->next->next;

		if (list == p2)
		{
			list = prev;
			prev =  p2;
			while (1)
			{
				p2 = prev;
				while (p2->next != list && p2->next != prev)
				{
					p2 = p2->next;
				}
				if (p2->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
