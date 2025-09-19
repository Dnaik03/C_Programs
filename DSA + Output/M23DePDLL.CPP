#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Structure for a doubly linked list
struct Node {
	int data;
	struct Node* prev;
	struct Node* next;
};

//Function to create a new node
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Function to print the list from the beginning
void printList(struct Node* head) {
	struct Node* temp = head;
	while(temp != NULL) {
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

//Function to delete a node at a given position (1-based index)
void deleteNode(struct Node**head, int position) {
	if(*head == NULL || position <= 0) {
		printf("Invalid position or empty list.\n");
		return;
	}

	struct Node* temp = *head;

	//If the node to be deleted is the head
	if(position == 1) {
		*head = temp->next; //Change head to next node
		if(*head != NULL) {
			(*head)->prev = NULL;
		}
		free(temp);
		return;
	}

	//Traverse the list to find the node at the given position
	for (int i=1; temp != NULL && i<position, i++) {
		temp = temp->next;
	}

	//If position is greater than the number of nodes
	if(temp == NULL) {
		printf("Position out of range:\n");
		return;
	}

	//Remove the node from the list
	if(temp->next != NULL) {
		temp->next->prev = temp->prev;
	}
	if(temp->prev != NULL) {
		temp->prev->next = temp->next;
	}
	free(temp);
}

//Main function to test the deletion
int main() {
	clrscr();
	struct Node* head = createNode(1);
	struct Node* second = createNode(2);
	struct Node* third = createNode(3);
	struct Node* fourth = createNode(4);

	//Linking nodes
	head->next = second
	second->prev = head;
	second->next = third;
	third->prev = second;
	third->next = fourth;
	fourth->prev = third;

	printf("Original List:");
	printList(head);

	//Delete node at position 3 (1-based index)
	deleteNode(&head, 3);

	printf("List after deletion at position 3:");
	printList(head);

	getch();
	return 0;
}