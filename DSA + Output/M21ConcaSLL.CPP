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
	struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//Function to append a node at the end of the list
void append(struct Node**head, int data) {
	struct Node* newNode = createNode(data);
	if (*head == NULL) {
		*head = newNode;
	} else {
		struct Node*temp = *head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

//Function to concatenate two linked lists
void concatenate(struct Node**head1, struct Node**head2) {
	if(*head1 == NULL) {
		*head1 = *head2;
		return;
	}

	struct Node* temp = *head1;
	while(temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = *head2;
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

int main() {
	struct Node *list1 = NULL;
	struct Node*list2 = NULL;

	clrscr();
	//Adding elements in List1
	append(&list1, 1);
	append(&list1, 2);
	append(&list1, 3);

	//Adding elements in list2
	append(&list2, 4);
	append(&list2, 5);

	printf("List1 before concatenation:");
	printList(list1);

	printf("List 2 before contatenation");
	printList(list2);

	//Concatenate list2 to list1
	concatenate(&list1, &list2);

	printf("List1 after concatenation:");
	printList(list1);


	getch();
	return 0;
}