#include <stdio.h>

int main() {
    int arr[] = {10, 324, 45, 90, 980}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int i,max1,max2;
  // Check if the array is empty
    if (n == 0) {
        printf("The array is empty.\n");
        return; // Indicate an error or an empty array scenario
    }
    max = arr[0];max2=are[1];
    // Iterate through the rest of the array starting from the second element
    for (i = 2; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
else if (arr[i]>max2)
max2=arr[i];
    }

    printf("The second largest element in the array is: %d",max2);
}
