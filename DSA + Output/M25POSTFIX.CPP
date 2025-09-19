//Evaluate postfix expression using stack
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100
#include<conio.h>

//Stack structure
struct Stack {
	int arr[MAX];
	int top;
};

//Function to initialize the stack
void initStack(struct Stack *s) {
	s->top = -1;
}

//Function to push an element to the stack
void push(struct Stack *s, int value) {
	if(s->top == MAX - 1) {
		printf("Stack Overflow\n");
		return;
	}
	s->arr[++(s->top)]=value;
}

//Function to pop an element from the stack
int pop(struct Stack *s) {
	if(s->top == -1) {
		printf("Stack Underflow\n");
		return -1;
	}
	return s->arr[(s->top)--];
}

//Function to evaluate a postfix expression
int evaluatePostfix(char *exp) {
	struct Stack s;
	initStack(&s);
	int i=0;

	while(exp[i] != '\0') {
		//if the character is a digit, push it to the stack
		if(isdigit(exp[i])) {
			push(&s, exp[i] - '0');
		}

		//If the character is an operator, pop two elements, perform the operation and push the result
		else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/') {
			int operand2 = pop(&s);
			int operand1 = pop(&s);
			int result;

			switch (exp[i]) {
				case'+': result = operand1 + operand2; break;
				case'-': result = operand1 - operand2; break;
				case'*': result = operand1 * operand2; break;
				case'/': result = operand1 / operand2; break;
				default:
					printf("Invalid operator\n");
					return -1;
			}
			push(&s, result);
		}
		i++;
	}

	//The result will be the last element in the stack
	return pop(&s);
}

int main() {
	char exp[MAX];
	clrscr();
	printf("Enter a postfix expression:");
	scanf("%s", exp);

	int result = evaluatePostfix(exp);
	printf("Result: %d\n", result);

	getch();
	return 0;
}
