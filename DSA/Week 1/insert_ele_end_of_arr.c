#include <stdio.h>

#define MAX_SIZE 100
void main() {
    int arr[MAX_SIZE];
    int currentSize = 5; // Assume the array initially has 5 elements
    int elementToAdd = 99;
    for (int i = 0; i < currentSize; i++) 
        scanf("%d", &arr[i]);

    printf("Original array:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check if there's space to add the element
    if (currentSize < MAX_SIZE) {
        arr[currentSize] = elementToAdd; // Add the element at the end
        currentSize++;                   // Increment the current size
        printf("Element %d added successfully.\n", elementToAdd);
    } else
        printf("Array is full. Cannot add element.\n");
    printf("Array after adding element:\n");
    for (int i = 0; i < currentSize; i++)
        printf("%d ", arr[i]);
}
