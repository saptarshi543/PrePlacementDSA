#include <stdio.h>
void main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100]; // Assuming array elements are within 0-99. Adjust size if needed.

    // Initialize frequency array with 0
    for (int i = 0; i < 100; i++)
        freq[i] = 0;
      // Count frequency of each element
    for (int i = 0; i < n; i++) 
        freq[arr[i]]++;
    printf("Element frequencies:\n");
    for (int i = 0; i < 100; i++) 
        if (freq[i] > 0) 
            printf("%d occurs %d times\n", i, freq[i]);
}

