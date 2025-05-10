#include <stdio.h>

// Function to perform Bubble Sort
void bubble_sort(int a[], int n) {
    int temp;

    // Outer loop to iterate through the entire array
    for (int i = 0; i < n - 1; i++) {
        // Inner loop to compare each element with the next one
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next one, swap them
            if (a[j] > a[j + 1]) {
                temp = a[j];  // Temporarily store the current element
                a[j] = a[j + 1];  // Swap the current element with the next
                a[j + 1] = temp;  // Assign the temporarily stored value to the next element
            }
        }
    }
}

void main() {
    int a[50], n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call the bubble_sort function to sort the array
    bubble_sort(a, n);

    // Output the sorted array
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  // Print each element of the sorted array
    }

    printf("\n");
}
