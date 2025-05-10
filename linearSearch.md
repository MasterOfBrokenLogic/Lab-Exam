# Linear Search

For Detailed Explanation and Steps, refer to the program: [Linear Search](./linearSearch.c)

## Problem Statement:
This program demonstrates **Linear Search**, where we search for a specific element in an array by examining each element sequentially. If the element is found, we return its position, otherwise, we return that it's not found.

## Input Example:
- **Number of elements:** 5
- **Elements:** 10 20 30 40 50
- **Element to search:** 30

## Logic:

### Initial Array:
Index:      0    1    2    3    4  
Values:    [10] [20] [30] [40] [50]  

- **Search for 30:**

### Step-by-Step Process:
1. Start from the first element of the array.
2. Compare the target element (30) with each element.
3. If the element is found, return its position.
4. If the element is not found after checking all elements, return -1.

### Final Outcome:
- In this case, **30** is found at position 2 (0-based index).

---

### Code Snippet:

```c
#include <stdio.h>
#define SIZE 20

int linear(int a[SIZE], int n, int data);

int main(){
    int a[SIZE], n, i, data, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &data);

    printf("Given array is: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\nElement to be searched is: %d\n", data);

    position = linear(a, n, data);

    if(position == -1){
        printf("Search is unsuccessful.\n");
        printf("%d is not found in the array.\n", data);
    } else {
        printf("Search is successful.\n");
        printf("%d found at position %d.\n", data, position);
    }

    return 0;
}

int linear(int a[], int n, int data){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] == data){
            return i;
        }
    }
    return -1;
}
```
## **Output:**

```c
Enter the number of elements: 5
Enter elements: 10 20 30 40 50
Enter element to be searched: 30
Given array is: 10 20 30 40 50 
Element to be searched is: 30
Search is successful.
30 found at position 2.
