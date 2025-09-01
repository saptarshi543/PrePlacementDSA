#include <stdio.h>
#include <stdlib.h>


struct Node {
int data;
struct Node *next;
};


struct Node *top = NULL;


void push(int val) {
struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
if (newNode == NULL) {
printf("Stack Overflow\n");
return;
}
newNode->data = val;
newNode->next = top;
top = newNode;
}


void pop() {
if (top == NULL) {
printf("Stack Underflow\n");
return;
}
struct Node *temp = top;
printf("Popped element: %d\n", temp->data);
top = top->next;
free(temp);
}


int peek() {
if (top == NULL) {
printf("Stack is empty\n");
return -1;
}
return top->data;
}


int isEmpty() {
return (top == NULL);
}
int main() {
push(10);
push(20);
printf("Top element: %d\n", peek());
pop();
printf("Top element after pop: %d\n", peek());
return 0;
}

