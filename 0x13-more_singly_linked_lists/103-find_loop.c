#include "lists.h"

/*https://www.youtube.com/watch?v=95ZfuoSAUPI*/

/**
 * find_listint_loop - function that find the first node in a
 * circular linked list
 *
 * @param
 * @head: pointer to the head node in the linked list
 *
 * Return:  the first node in a circular linked list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			slow = head;

			while (slow != fast)
			{

				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
