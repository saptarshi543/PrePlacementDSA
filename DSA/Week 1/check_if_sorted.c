#include <stdio.h>
#include <stdbool.h> // Required for bool type
void main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    bool isSorted1 = true;
    for (int i = 0; i < n1 - 1; i++) 
        if (arr1[i] > arr1[i+1]) {
            isSorted1 = false;
            break;
        }
    if (isSorted1)
        printf("Array 1 is sorted.\n");
    else 
        printf("Array 1 is not sorted.\n");
    }
