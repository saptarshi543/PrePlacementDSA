#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;


void push(char item) {
if (top >= MAX_SIZE - 1) {
printf("Stack Overflow\n");
return;
}
stack[++top] = item;
}


char pop() {
if (top < 0) {
return '\0'; 
}
return stack[top--];
}


int is_empty() {
return (top == -1);
}
int are_parentheses_balanced(char* expression) {
int i;
for (i = 0; i < strlen(expression); i++) {
char current_char = expression[i];


if (current_char == '(' || current_char == '{' || current_char == '[') {
push(current_char);
} else if (current_char == ')' || current_char == '}' || current_char == ']') {
char popped_char = pop();
if ((current_char == ')' && popped_char != '(') ||
(current_char == '}' && popped_char != '{') ||
(current_char == ']' && popped_char != '[')) {
return 0; // Not balanced
}
}
}
return is_empty(); // If stack is empty, it's balanced
}


int main() {
char expression1[] = "{()}[{}]";
char expression2[] = "([)]";


if (are_parentheses_balanced(expression1)) {
printf("'%s' is balanced.\n", expression1);
} else {
printf("'%s' is not balanced.\n", expression1);
}


if (are_parentheses_balanced(expression2)) {
printf("'%s' is balanced.\n", expression2);
} else {
printf("'%s' is not balanced.\n", expression2);
}


return 0;
}
