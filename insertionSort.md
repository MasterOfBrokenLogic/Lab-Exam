# Insertion Sort

For Detailed Explanation and Steps, refer to the program: [Insertion Sort](./insertionSort.c)

## Problem Statement:
We are tasked with sorting an array of integers in ascending order using the **Insertion Sort** algorithm. This program demonstrates how insertion sort works by repeatedly taking an element from the unsorted part of the array and inserting it into its correct position in the sorted part.

## Input Example:
- **Number of elements:** 5
- **Elements:** 12 11 13 5 6

## Logic:

### Initial Array:
Index:      0    1    2    3    4  
Values:    [12] [11] [13] [5]  [6]  

- **Sort the array using insertion sort:**

### Step-by-Step Process:
1. Start with the second element (12), and compare it with the first element (11).
2. Place the smaller of the two in the first position.
3. Move to the third element and insert it in the sorted portion.
4. Repeat this process until the entire array is sorted.

### Final Array After Sorting:
Index:      0    1    2    3    4  
Values:    [5]  [6]  [11] [12] [13]  

## Code Walkthrough:

1. The program begins by asking the user for the size of the array and its elements.
2. The `insertion_sort` function is called to sort the array.
3. The algorithm moves through the array, comparing and shifting elements to insert each one in the correct position.
4. The program then prints the sorted array.

---

### Code Snippet:

```c
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
```

---

### Output Snippet:

```c
Enter the size of the array: 5
Enter the elements: 12 11 13 5 6
The sorted array is: 5 6 11 12 13 
```
