# Selection Sort

For Detailed Explanation and Steps, refer to the program: [Selection Sort](./selectionSort.c)

## Problem Statement:
We are tasked with sorting an array of integers in ascending order using the **Selection Sort** algorithm. This program demonstrates how the selection sort works by repeatedly finding the minimum element from the unsorted part of the array and swapping it with the first unsorted element.

## Input Example:
- **Number of elements:** 5
- **Elements:** 64 25 12 22 11

## Logic:

### Initial Array:
Index:      0    1    2    3    4  
Values:    [64] [25] [12] [22] [11]  

- **Sort the array using selection sort:**

### Step-by-Step Process:
1. Initially, the entire array is unsorted.
2. The first pass selects the smallest element and places it at the first position.
3. In the next pass, the smallest element from the remaining unsorted part is placed at the second position, and so on.
4. The process continues until the entire array is sorted.

### Final Array After Sorting:
Index:      0    1    2    3    4  
Values:    [11] [12] [22] [25] [64]  

## Code Walkthrough:

1. The program begins by asking the user for the size of the array and its elements.
2. The `selection_sort` function is called to sort the array.
3. The algorithm finds the smallest element in the unsorted portion and swaps it with the first unsorted element.
4. The program then prints the sorted array.

---

### Code Snippet:

```c
#include <stdio.h>

void selection_sort(int a[], int n);

void main() {
	int a[50], n, i;

	printf("Enter the size of the array: ");
		scanf("%d", &n);

	printf("Enter the elements of the array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	selection_sort(a, n);

	printf("The sorted array is:\n");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
}

void selection_sort(int a[], int n) {
	int min, temp, j;

	for (int i = 0; i < n - 1; i++) {
		min = i;

		for (j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}

		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}
```

---

### Output Snippet:

```c
Enter the size of the array: 5
Enter the elements of the array: 64 25 12 22 11
The sorted array is:
11 12 22 25 64 
```
