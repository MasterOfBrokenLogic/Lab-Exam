# Binary Search

For Detailed Explanation and Steps, refer to the program: [Binary Search](./binarySearch.c)

## Problem Statement:
We are tasked with searching for a specific element in a sorted array using the Binary Search algorithm. This program demonstrates how to efficiently find an element in the array by repeatedly dividing the search interval in half.

## Input Example:
- **Number of elements:** 5
- **Elements:** 10 20 30 40 50
- **Element to search:** 30

## Logic:

### Initial Array:
Index:      0    1    2    3    4  
Values:    [10] [20] [30] [40] [50]  

- **Search for element 30:**

### Step-by-Step Process:
1. Initially, the search interval is the entire array.
2. The middle element is compared with the item.
3. If the item is equal to the middle element, the index is returned.
4. If the item is smaller, the search continues in the left half.
5. If the item is larger, the search continues in the right half.
6. This process repeats until the item is found or the interval becomes empty.

### Final Result:
- **Item found at index 2**.

## Code Walkthrough:

1. The program begins by asking the user for the size of the array and its elements.
2. The program also takes the element to search for as input.
3. The `bsearch` function is called to perform the binary search.
4. Based on the result, the program either prints the index of the found item or indicates that the search was unsuccessful.

---

### Code Snippet:

```c
#include <stdio.h>

// Function to perform Binary Search
int bsearch(int a[], int n, int item) {
    int beg = 0, last = n - 1;  // Initialize beginning and last positions of the array
    while(beg <= last) {  // Continue searching as long as the beginning index is less than or equal to the last index
        int mid = (beg + last) / 2;  // Calculate the middle index

        // If the item is found at the middle position, return the index
        if(item == a[mid])
            return mid;

        // If the item is smaller than the middle element, search in the left half
        else if(item < a[mid])
            last = mid - 1;  // Move the last index to mid - 1

        // If the item is larger than the middle element, search in the right half
        else
            beg = mid + 1;  // Move the beginning index to mid + 1
    }
    return -1;  // Return -1 if the item is not found in the array
}

int main() {
    int a[50], item, n, index, i;

    // Input the size of the array
    printf("Enter the desired array size: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Input the element to search for
    printf("Enter the element to be searched: ");
    scanf("%d", &item);

    // Call the binary search function
    index = bsearch(a, n, item);

    // If index is -1, the search was unsuccessful
    if(index == -1)
        printf("Search is unsuccessful.\n");

    // If the item was found, print the index
    else
        printf("Item found at index %d.\n", index);

    return 0;
}
```

---

### Output:

```c
Enter the desired array size: 5
Enter the array elements: 10 20 30 40 50
Enter the element to be searched: 30
Item found at index 2.
```
