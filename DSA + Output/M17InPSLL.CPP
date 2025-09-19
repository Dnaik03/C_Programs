#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Define the structure for a node
struct Node
{
	int data;
	struct Node *next;
};

// Function to create new node
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//Function to print the linked list
void printList(struct Node* head) {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

//Function to add a node at a specific position
void addNodeAtPosition(struct Node** head, int data, int position) {

	//Create a new node
	struct Node* newNode =  createNode(data);

	//If position is 0, insert at the beginning
	if(position == 0) {
		newNode->next = *head;
		*head = newNode;
		return;
	}

	//Traverse the list to find the (position-1)th node
	struct Node* temp = *head;
	for(int i=0; temp != NULL && i < position - 1; i++) {
		temp = temp->next;
	}

	//If the position is greater than the number of nodes, print an error
	if(temp == NULL) {
		printf("Position out of range:\n");
		free(newNode);
		return;
	}

	//Insert the new node at the desired position
	newNode->next = temp->next;
	temp->next = newNode;
}
int main() {
	struct Node* head = NULL;
	clrscr();
	//Adding nodes to the list
	addNodeAtPosition(&head, 10, 0); //Add 10 at position 0
	addNodeAtPosition(&head, 20, 1); //Add 20 at position 1
	addNodeAtPosition(&head, 30, 1); //Add 30 at position 1
	addNodeAtPosition(&head, 40, 5); //Position out of range [invalis]

	printList(head);

	getch();
	return 0;
}