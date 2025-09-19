#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Define the structure for a linked list node
struct Node {
	int data;
	struct Node *next;
};

//Function to reverse the linked list
void reverse(struct Node**head) {
	struct Node*prev = NULL;
	struct Node* current = *head;
	struct Node*next = NULL;

	while (current != NULL) {
		next = current->next; //Save next node
		current->next = prev; //Reverse the current node's pointer
		prev = current; //Move prev and current one step forward
		current = next;
	}

	*head = prev; //Update head to the first node
}

//Function to print the linked list
void printList(struct Node *head) {
	struct Node*temp = head;
	while (temp!= NULL) {
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

//Function to  add a node at the beginning
void push(struct Node**head, int new_data) {
	struct Node*new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = *head;
	*head = new_node;
}

int main() {
	struct Node *head = NULL;
	clrscr();
	//Inserting some nodes at the front of the list
	push(&head, 10);
	push(&head, 20);
	push(&head, 30);
	push(&head, 40);

	printf("Original Linked List:");
	printList(head);

	reverse(&head);

	printf("Reversed List:");
	printList(head);

	getch();
	return 0;
}