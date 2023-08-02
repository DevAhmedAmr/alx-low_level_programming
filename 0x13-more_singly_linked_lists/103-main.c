#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	listint_t *head;
	listint_t *node;

	/* Edge Case 1: Two Nodes with Loop */
	head = NULL;
	node = add_nodeint(&head, 0);
	node->next = add_nodeint(&head, 1);
	node->next->next = node; /* Loop between 1 and 0 */
	print_listint_safe(head);
	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	free_listint_safe(&head);

	/* Edge Case 2: Linked List with One Node */
	head = NULL;
	node = add_nodeint(&head, 0); /* Only one node */
	print_listint_safe(head);
	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	free_listint_safe(&head);

	/* Edge Case 3: Very Large Linked List */
	head = NULL;
	for (i = 0; i < 1000000; i++)
	{
		add_nodeint(&head, i);
	}
	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	free_listint_safe(&head);

	return (0);
}
