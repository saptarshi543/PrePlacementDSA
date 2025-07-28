#include <stdio.h>
#include <string.h>
void main() {
    char str[100];
    char reversedStr[100]; 
    int i, j, length;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str); // Get the length of the string
    for (i = 0, j = length - 1; i < length; i++, j--) 
        reversedStr[i] = str[j];
    reversedStr[length] = '\0'; // Add null terminator to the end of the reversed string
    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversedStr);
}
