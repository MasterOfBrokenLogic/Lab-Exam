#include <stdio.h>

// Function to perform Insertion Sort
void insertion_sort(int a[], int n) {
    int key, j;

    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        key = a[i];  // The element to be inserted into the sorted part of the array
        j = i - 1;   // Start comparing with the element just before the key

        // Shift elements of the sorted portion of the array to the right
        // as long as they are greater than the key
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];  // Shift element to the right
            j = j - 1;  // Move to the previous element in the sorted portion
        }

        // Insert the key at its correct position in the sorted portion
        a[j + 1] = key;
    }
}

void main() {
    int a[50], n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call the insertion_sort function to sort the array
    insertion_sort(a, n);

    // Output the sorted array
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  // Print each element of the sorted array
    }

    printf("\n");
}
