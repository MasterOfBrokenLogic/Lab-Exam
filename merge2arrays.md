# Merging Two Arrays

For Detailed Explanation and Steps, refer to the program: [Merge Arrays](./merge2arrays.c)

## Problem Statement:
We are tasked with merging two arrays into a single array. This program demonstrates how to combine elements from two arrays into one by copying each array's elements into a new array.

## Input Example:
- **Size of first array:** 5
- **First array elements:** 10 20 30 40 50
- **Size of second array:** 3
- **Second array elements:** 60 70 80

## Logic:

### Initial Arrays:
**Array 1:** [10, 20, 30, 40, 50]  
**Array 2:** [60, 70, 80]

- **Merge the two arrays:**

### Step-by-Step Process:
1. Start by copying all elements from the first array (`arr1`) into the result array.
2. Then, copy all elements from the second array (`arr2`) into the result array after the last element from `arr1`.
3. The result array now contains all the elements from both arrays.

### Final Merged Array:
**Merged Array:** [10, 20, 30, 40, 50, 60, 70, 80]

## Code Walkthrough:

1. The program first asks the user for the size and elements of the first and second arrays.
2. The `mergeArrays` function is called to merge the two arrays.
3. It copies elements from both arrays into the result array.
4. The `printArray` function is used to display the merged array.

---

### Code Snippet:

```c
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
```

---

### Output Snippet:

```c
Enter the size of first array: 5
Enter the elements of first array:
10 20 30 40 50
Enter the size of second array: 3
Enter the elements of second array:
60 70 80
Merged array is: 10 20 30 40 50 60 70 80
```
