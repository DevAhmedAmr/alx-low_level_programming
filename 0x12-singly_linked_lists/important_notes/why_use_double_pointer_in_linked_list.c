
#include <stdio.h>
#include <stdlib.h>

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

	struct Node *head2 = NULL;

	//* when we pass a single null pointer , we get an error and the program exist
	//* that happens bcs when we are trying to access the memory location that the null pointer points to
	//*  but since the pointer is null (meaning it doesn't point to any valid memory address),
	//! this operation leads to undefined behavior.

	//? but when we pass a double pointer for a null pointer , when we dereference it , we will get the it's value
	//? which is the null pointer then we can assign a value for "the dereferenced null pointer" which won't lead to an error

	//? so we use a double null pointer to avoid dereferencing a null pointer to avoid errors and undefined behaviors
	insertAtBeginning_dereferenced(head2, 20); // unidentified behavior then the program exist

	return 0;
}
