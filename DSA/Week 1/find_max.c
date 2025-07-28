#include <stdio.h>
void main() {
    int arr[] = {10, 324, 45, 90, 980}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int i,max;
    // Check if the array is empty
    if (n == 0) {
        printf("The array is empty.\n");
        return; 
    }
    // Assume the first element is the largest initially
    max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("The largest element in the array is: %d\n", max);
}
