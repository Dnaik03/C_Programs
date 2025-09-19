//Implementation of Push and Pop Operation on Stack using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 5 //Maximum size of the stack
#include<conio.h>
//Stack structure
struct Stack {
	int arr[MAX]; //Array to hold stack elements
	int top;      //Index of the top element
};

//Function to initialize the stack
void initialize(struct Stack* stack) {
	stack->top = -1; //Stack is initially empty
}

//Function to check if the stack is full
int isFull(struct Stack* stack) {
	return stack->top == MAX - 1;
}

//Function to check if the stack is empty
int isEmpty(struct Stack* stack){
	return stack->top == -1;
}

//Function to push an element onto the stack
void push(struct Stack* stack, int value) {
	if(isFull(stack)) {
		printf("Stack Overflow! Cannot push %d\n", value);
	} else {
		stack->arr[++(stack->top)] = value; //Increment top and add the element
		printf("%d  pushed onto stack\n", value);
	}
}

//Function to pop an element from the stack
int pop(struct Stack* stack) {
	if(isEmpty(stack)) {
		printf("Stack Underflow! Cannot pop\n");
		return -1; //Return -1 if the stack is empty
	} else {
		int poppedValue = stack->arr[stack->top--]; //Return the top element
		return poppedValue;
	}
}

//Function to display the stack elements
void display(struct Stack* stack) {
	if(isEmpty(stack)) {
		printf("Stack is empty\n");
	} else {
		printf("Stack elements:");
		for(int i = stack->top; i >= 0; i--) {
			printf("%d", stack->arr[i]);
		}
		printf("\n");
	}
}

int main() {
	struct Stack stack; //Declare a stack
	initialize(&stack); //Initialize the stack
	clrscr();
	//Perform some push operations
	push(&stack, 10);
	push(&stack, 20);
	push(&stack, 30);

	//Display the stack
	display(&stack);

	//Perform some pop operations
	printf("Popped value:%d\n", pop(&stack));
	printf("Popped value:%d\n", pop(&stack));

	//Display the stack again
	display(&stack);

	//Attempting to pop from an empty stack
	pop(&stack);
	pop(&stack);

	getch();
	return 0;
}