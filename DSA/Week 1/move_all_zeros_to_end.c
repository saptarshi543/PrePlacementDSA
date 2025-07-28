#include <stdio.h>
void main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0; // Count of non-zero element
// Traverse the array. If element is non-zero, put it at the
    // next available position (count) and increment count.
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i];
    // Fill remaining positions with zeros
    while (count < n)
        arr[count++] = 0;

    printf("Array after moving zeros to end: \n");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
}
