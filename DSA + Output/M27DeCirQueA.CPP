#include<stdio.h>
#include<stdlib.h>
#define MAX 5 //Maximum size of the circular queue
#include<conio.h>
//Circular Queue structure
typedef struct {
	int arr[MAX];
	int front;
	int rear;
} CircularQueue;

//Function to initialize the queue
void initializeQueue(CircularQueue* q) {
	q->front = -1;
	q->rear = -1;
}
//Function to check if the queue is empty
int isEmpty(CircularQueue* q) {
	return (q->front == -1);
}

//Function to cheack if the queue is full
int isFull(CircularQueue* q) {
	return ((q->rear + 1) % MAX == q->front);
}



//Function to insert an element into the circular queue
void enqueue(CircularQueue* q, int value) {
	if(isFull(q)) {
		printf("Queue is full Cannot insert %d\n", value);
	} else {
		if(q->front == -1) { //Queue is empty
			q->front = 0;
		}
		q->rear = (q->rear + 1) % MAX; //Circular increment
		q->arr[q->rear] = value;
		printf("Inserted %d into the queue\n", value);
	}
}

//Function to dequeue an element from the queue
void dequeue(CircularQueue* q) {
	if(isEmpty(q)) {
		printf("Queue is empty! Cannot dequeue:\n");
	} else {
		int dequeuedValue = q->arr[q->front];
		if(q->front == q->rear) { //Only one element in the queue
			q->front = -1;
			q->rear = -1;
		} else {
			q->front = (q->front + 1) % MAX; //Circular increment
		}
		printf("%d dequeued from queue\n", dequeuedValue);
	}
}

//Function to display  the queue
void displayQueue(CircularQueue* q) {
	if(isEmpty(q)) {
		printf("Queue is empty:\n");
	} else {
		int i = q->front;
		printf("Queue elements:");
		while(i != q->rear) {
			printf("%d", q->arr[i]);
			i = (i+1) % MAX; //Circular increment
		}
		printf("%d\n", q->arr[q->rear]); //Print the last element
	}
}
int main() {
	CircularQueue q;
	initializeQueue(&q);
	clrscr();
	//Insert elements into the queue
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 40);
	enqueue(&q, 50);

	//Display the queue
	displayQueue(&q);

	dequeue(&q); //Remove the front element
	displayQueue(&q);

	//Try to insert when the queue is full
	enqueue(&q, 60);    //Add a new element after deletion
	//Display the queue after insertion
	displayQueue(&q);

	dequeue(&q); //REmove another front element
	displayQueue(&q);

	getch();
	return 0;
}