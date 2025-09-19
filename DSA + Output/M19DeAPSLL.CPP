#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Define the structure for a linked list node
struct Node {
	int data;
	struct Node *next;
};

//Function to create a new node
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//Function to insert a node at the end of the linked list
void append(struct Node**head, int data) {
	struct Node*newNode = createNode(data);
	if (*head == NULL) {
		*head = newNode;
		return;
	}

	struct Node*temp = *head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

//Function to delete a node at a given position (1-based index) from the linked list
void deleteNode(struct Node **head, int position) {
	//Check if the list is empty
	if(*head == NULL) {
		printf("List is empty nothing to delte:\n");
		return;
	}

	//Store the current head node
	struct Node *temp = *head;

	//If the position to be deleted is the head node
	if(position == 1) {
		*head = temp->next; //Change the head
		free(temp);	//Free the old head node
		return;
	}

	//Find the previous node of the node to be deleted
	for (int i=1; temp != NULL && i<position - 1; i++) {
		temp = temp->next;
	}

	//If the position is more than the number of nodes
	if (temp == NULL || temp->next == NULL) {
		printf("Position is out of range:\n");
		return;
	}

	//Node temp->next is the node to be deleted
	struct Node* nodeToDelete = temp->next;
	temp->next = temp->next->next; //Unlike the node from the list
	free(nodeToDelete); //Free the memory of the node
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

//Main function
int main() {
	struct Node *head = NULL;

	clrscr();
	//Inserting some nodes at the front of the list
	append(&head, 10);
	append(&head, 20);
	append(&head, 30);
	append(&head, 40);

	printf("Original Linked List:");
	printList(head);

	int position;
	printf("Enter position to delete node:");
	scanf("%d", &position);

	//Delete node at the given position
	deleteNode(&head, position);

	printf("Linked List after deletion");
	printList(head);

	getch();
	return 0;
}