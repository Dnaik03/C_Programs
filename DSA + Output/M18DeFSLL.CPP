#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Define the structure for a linked list node
struct Node {
	int data;
	struct Node *next;
};

//Function to delete the front node(head)from the linked list
void deleteFrontNode(struct Node **head) {
	//Check if the list is empty
	if(*head == NULL) {
		printf("List is empty nothing to delte:\n");
		return;
	}

	//Store the current head node
	struct Node *temp = *head;

	//Move the head pointer to the next node
	*head = (*head)->next;

	//Free the memory of the old head node
	free(temp);

	printf("Front node deleted successfully\n");
}

//Function to insert a new node at the beginning of the list
void insertFront(struct Node **head, int data) {
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

//Function to print the linked list
void printList(struct Node *head) {
	if(head == NULL) {
		printf("List is empty: \n");
		return;
	}

	struct Node *temp = head;
	while (temp != NULL) {
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
int main() {
	struct Node *head = NULL;

	//Inserting some nodes at the front of the list
	insertFront(&head, 10);
	insertFront(&head, 20);
	insertFront(&head, 30);
	insertFront(&head, 40);

	printf("Original Linked List:");
	printList(head);

	//Deleting the front node
	deleteFrontNode(&head);

	printf("Linked List after deleting the front node:");
	printList(head);

	getch();
	return 0;
}