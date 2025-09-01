#include <stdio.h>


#define MAX_SIZE 10


int stack[MAX_SIZE];
int top = -1; 


int isEmpty() {
return (top == -1);
}


int isFull() {
return (top == MAX_SIZE - 1);
}


void push(int data) {
if (isFull()) {
printf("Stack Overflow! Cannot push %d\n", data);
} else {
top++;
stack[top] = data;
printf("%d pushed to stack.\n", data);
}
}


int pop() {
if (isEmpty()) {
printf("Stack Underflow! Cannot pop from empty stack.\n");
return -1;
} else {
int popped_element = stack[top];
top--;
return popped_element;
}
}
int peek() {
if (isEmpty()) {
printf("Stack is empty. No element to peek.\n");
return -1; 
} else {
return stack[top];
}
}


void display() {
if (isEmpty()) {
printf("Stack is empty.\n");
} else {
printf("Stack elements: ");
for (int i = top; i >= 0; i--) {
printf("%d ", stack[i]);
}
printf("\n");
}
}


int main() {
push(10);
push(20);
push(30);
display();


printf("Popped element: %d\n", pop());
display();


printf("Top element: %d\n", peek());
push(40);
push(50);
push(60); 
display();


return 0;
}

