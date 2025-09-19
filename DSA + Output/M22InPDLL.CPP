#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Define the structure for a node in the DLL
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

//Function to create a new node
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

//Function to insert a node at a given position in the DLL
void insertAtPosition(struct Node** head, int position, int data) {
	struct Node* newNode = createNode(data);

	//If the list is empty or inserting at the beginning (position 0)
	if(*head == NULL || position == 0) {
		newNode->next = *head;
		if(*head != NULL) {
			(*head)->prev = newNode;
		}
		*head = newNode;
		return;
	}

	struct Node* temp = *head;
	int currentPos = 0;

	//Traverse the list to the specified position
	while (temp != NULL && currentPos < position - 1) {

		temp = temp->next;
		currentPos++;
	}

	//If the position is beyond the end of the list, we can insert at the end
	if(temp == NULL) {
		printf("The position is beyond the end of the list. Inserting at the end");
		temp = *head;
		while(temp->next != NULL) {
			temp = temp->next;
		}
	}

	//Insert the new node at the desired position
	newNode->next = temp->next;
	newNode->prev = temp;

	//Update the next node if it's not NULL
	if(temp->next != NULL) {
		temp->next->prev = newNode;
	}

	//Link the previous node to the next node
	temp->next = newNode;
}

//Function to print the list(forward traversal)
void printList(struct Node* head) {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d<->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

//Main function to test the insert function
int main() {
	struct Node* head = NULL;
	clrscr();

	//Insert nodes at various positions
	insertAtPosition(&head, 0, 10); //Insert 10 at position 0
	insertAtPosition(&head, 1, 20); //Insert 20 at position 1
	insertAtPosition(&head, 1, 15); //Insert 15 at position 1
	insertAtPosition(&head, 3, 25); //Insert 25 at position 3

	//Print the list after insertions
	printList(head);

	getch();
	return 0;
}