#include <stdio.h>
#include <stdlib.h>


#define SIZE 5 


int queue[SIZE];
int front = -1, rear = -1;


int isFull() {
return ( (rear + 1) % SIZE == front );
}


int isEmpty() {
return (front == -1);
}


void enqueue(int value) {
if (isFull()) {
printf("Queue is FULL! Cannot enqueue %d\n", value);
return;
}


if (isEmpty()) {
front = rear = 0;
} else {
rear = (rear + 1) % SIZE;
}


queue[rear] = value;
printf("Enqueued: %d\n", value);
}


int dequeue() {
if (isEmpty()) {
printf("Queue is EMPTY! Cannot dequeue.\n");
return -1;
}


int deletedValue = queue[front];


if (front == rear) {
front = rear = -1;
} else {
front = (front + 1) % SIZE;
}


printf("Dequeued: %d\n", deletedValue);
return deletedValue;
}


void display() {
if (isEmpty()) {
printf("Queue is EMPTY!\n");
return;
}


printf("\n");
int i = front;
while (1) {
printf("%d ", queue[i]);
if (i == rear)
break;
i = (i + 1) % SIZE;
}
printf("\n");
}


void main() {
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50); 
display();


dequeue();
dequeue();


display();


enqueue(60);
enqueue(70); 


display();
}


