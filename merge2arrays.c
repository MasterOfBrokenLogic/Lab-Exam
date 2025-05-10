#include <stdio.h>

// Function to merge two arrays
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i, j;

    // Copy elements from the first array to the result array
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }

    // Copy elements from the second array to the result array
    for (j = 0; j < n2; j++) {
        result[i + j] = arr2[j];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Print each element
    }
    printf("\n");
}

int main() {
    int arr1[50], arr2[50], result[100];
    int n1, n2;

    // Input the size and elements of the first array
    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size and elements of the second array
    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Call the mergeArrays function to merge the two arrays
    mergeArrays(arr1, n1, arr2, n2, result);

    // Output the merged array
    printf("Merged array is: ");
    printArray(result, n1 + n2);

    return 0;
}
