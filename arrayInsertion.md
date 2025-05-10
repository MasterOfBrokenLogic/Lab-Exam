# Insertion into Array

## Problem Statement:
We are tasked with inserting a number into a specific position of an array. This program will demonstrate how to achieve this by shifting elements in the array to make space for the new element.

## Input Example:
- **Number of elements:** 5
- **Elements:** 10 20 30 40 50
- **Number to insert:** 99
- **Position to insert:** 3

## Logic:

### Initial Array:
Index:      0    1    2    3    4  
Values:    [10] [20] [30] [40] [50]  

- **Insert 99 at position 3:**

### Step-by-Step Process:
1. We need to shift elements starting from the last element to the position where we want to insert the new number.
2. After shifting, the new number is placed at the correct position.
3. The array size is then increased.

### Final Array After Insertion:
Index:      0    1    2    3    4    5  
Values:    [10] [20] [99] [30] [40] [50]  

## Code Walkthrough:

1. We first input the number of elements and the array values.
2. Then, we input the number to insert and its position.
3. The program shifts elements starting from the last index to the target index.
4. The new number is inserted at the desired position, and the array is displayed.

---

### Code Snippet:

```c
#include <stdio.h>

int main() {
    int a[100], pos, n, num, i;

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    // Shift elements one step to the right starting from the last element to make space
    for(i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num; // Insert number at the correct position
    n++; // Increase the number of elements

    printf("New array is: ");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]); // Print the updated array
    }

    return 0;
}
