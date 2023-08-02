#include "lists.h"

/*https://www.youtube.com/watch?v=95ZfuoSAUPI*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
	{
		return NULL;
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
	return NULL;
}
