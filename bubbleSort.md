# Bubble Sort

For Detailed Explanation and Steps, refer to the program: [Bubble Sort](./bubbleSort.c)

## Problem Statement:
We are tasked with sorting an array of integers in ascending order using the **Bubble Sort** algorithm. This program demonstrates how bubble sort works by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.

## Input Example:
- **Number of elements:** 5
- **Elements:** 64 25 12 22 11

## Logic:

### Initial Array:
Index:      0    1    2    3    4  
Values:    [64] [25] [12] [22] [11]  

- **Sort the array using bubble sort:**

### Step-by-Step Process:
1. Compare the first two elements (64 and 25). Since 64 > 25, swap them.
2. Continue comparing and swapping adjacent elements until the largest element (64) is moved to the end.
3. Repeat the process for the remaining unsorted portion of the array.
4. Continue until the entire array is sorted.

### Final Array After Sorting:
Index:      0    1    2    3    4  
Values:    [11] [12] [22] [25] [64]  

## Code Walkthrough:

1. The program first asks the user for the size of the array and its elements.
2. The `bubble_sort` function is called to sort the array using the bubble sort algorithm.
3. The algorithm works by comparing adjacent elements and swapping them if needed. It continues until the array is fully sorted.
4. The program then prints the sorted array.

---

### Code Snippet:

```c
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
```

---

### Output Snippet:

```c
Enter the size of the array: 5
Enter the elements:
64 25 12 22 11
The sorted array is:
11 12 22 25 64 
```
