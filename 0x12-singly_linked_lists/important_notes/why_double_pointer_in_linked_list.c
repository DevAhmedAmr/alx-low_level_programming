#include <stdio.h>
struct Node
{
	int data;
	struct Node *next;
};

void print_linkedList(struct Node *head)
{
	int count = 1;
	while (head != NULL)
	{
		printf("head2 : %p", head);
		printf("%i-%i\n", count, head->data);
		head = head->next;
		count++;
	}
}

//! bad example 1
void insertAtBeginning(struct Node *head, int newData)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = head;
	head = newNode;
	print_linkedList(head); //* the linked list head is updated but only inside this function
							//? if we print it in the main function we will notice that the linked list is still empty
							//*  so that we need to use double ptr (so we can change the address of ptr to head globally)
}

//! bad example 2

//* when using a double pointer it allows  to add a new node at the beginning
//* of a linked list without losing the old value of the old head node ()

//? in linked list to add a new element to it at the beginning we need to update the first pointer in the linked list
//? and make it points to a new node and make  'newNode.next' points to the old head node
//?not just copy the value of the new node to head node

//! but when using a single pointer and trying to copy (dereferencing it) new node value into head value
//! we actually lose the old head value so that we enter into an infinity loop

void insertAtBeginning_dereferenced(struct Node *head, int newData)
{
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = head;
	*head = *newNode;
}

int main()
{
	struct Node *head = NULL;

	insertAtBeginning(head, 10);
	insertAtBeginning(head, 20);

	print_linkedList(head); //! print no thing bcs the node is only added inside 'insertAtBeginning' noy globally

	struct Node *head2 = malloc(sizeof(struct Node));

	// enters an infinity loop when we try to print the linked list
	// bcs the we changed the value of the old head so it will never be null

	insertAtBeginning_dereferenced(head2, 20);
	print_linkedList(head2); // infty loop

	return 0;
}

