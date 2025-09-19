#include<stdio.h>
#include<stdlib.h>
#define MAX 5 //Maximum size of the circular queue
#include<conio.h>
//Circular Queue structure
struct CircularQueue {
	int arr[MAX];
	int front, rear;
};

//Function to initialize the queue
void initQueue(struct CircularQueue* queue) {
	queue->front = -1;
	queue->rear = -1;
}

//Function to cheack if the queue is full
int isFull(struct CircularQueue* queue) {
	return ((queue->rear + 1) % MAX == queue->front);
}

//Function to check if the queue is empty
int isEmpty(struct CircularQueue* queue) {
	return (queue->front == -1);
}

//Function to insert an element into the circular queue
void enqueue(struct CircularQueue* queue, int value) {
	if(isFull(queue)) {
		printf("Queue is full Cannot insert %d\n", value);
	} else {
		if(queue->front == -1) { //Queue is empty
			queue->front = 0;
		}
		queue->rear = (queue->rear + 1) % MAX; //Circular increment
		queue->arr[queue->rear] = value;
		printf("Inserted %d into the queue\n", value);
	}
}

//Function to display  the queue
void displayQueue(struct CircularQueue* queue) {
	if(isEmpty(queue)) {
		printf("Queue is empty:\n");
		return;
	}
	printf("Queue contents:");
	int i = queue->front;
	while(i != queue->rear) {
		printf("%d", queue->arr[i]);
		i = (i+1) % MAX; //Circular increment
	}
	printf("%d\n", queue->arr[queue->rear]); //Print the last element
}

int main() {
	struct CircularQueue queue;
	initQueue(&queue);
	clrscr();
	//Insert elements into the queue
	enqueue(&queue, 10);
	enqueue(&queue, 20);
	enqueue(&queue, 30);
	enqueue(&queue, 40);
	enqueue(&queue, 50);

	//Display the queue
	displayQueue(&queue);

	//Try to insert when the queue is full
	enqueue(&queue, 60);

	//Display the queue after insertion
	displayQueue(&queue);

	getch();
	return 0;
}