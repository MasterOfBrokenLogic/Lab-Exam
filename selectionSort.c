#include <stdio.h>

// Function to perform Selection Sort
void selection_sort(int a[], int n) {
    int min, temp, j;

    // Loop through the entire array
    for (int i = 0; i < n - 1; i++) {
        min = i;  // Assume the current index has the smallest element

        // Find the smallest element in the remaining unsorted part
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;  // Update min if a smaller element is found
            }
        }

        // Swap the found smallest element with the first unsorted element
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void main() {
    int a[50], n, i;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the elements of the array from the user
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call the selection_sort function to sort the array
    selection_sort(a, n);

    // Output the sorted array
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);  // Print each element of the sorted array
    }

    printf("\n");
}
