#include <stdio.h>
#include <string.h>
void main() {
    char str[100]; 
    char reversedStr[100];    int i, j, length;
    printf("Enter a string: ");
    scanf("%s", str); 
    length = strlen(str);
    for (i = 0, j = length - 1; i < length; i++, j--)
     if (reversedStr[i] != str[j]){
		printf("Not palindrome");
		break; 
		return;
		}
printf("Palindrome");
}
