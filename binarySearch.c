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
