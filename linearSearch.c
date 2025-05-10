#include <stdio.h>
#define SIZE 20  // Define maximum size of the array

// Function for linear search
int linear(int a[SIZE], int n, int data);

int main(){
    int a[SIZE], n, i, data, position;

    // Input number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // Input the element to be searched
    printf("Enter element to be searched: ");
    scanf("%d", &data);

    // Display the array elements
    printf("Given array is: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    // Display the element to be searched
    printf("\nElement to be searched is: %d\n", data);

    // Call the linear search function to find the position of the element
    position = linear(a, n, data);

    // Check if the element was found or not and print the result
    if(position == -1){
        printf("Search is unsuccessful.\n");
        printf("%d is not found in the array.\n", data);
    } else {
        printf("Search is successful.\n");
        printf("%d found at position %d.\n", data, position);
    }

    return 0;
}

// Function to perform linear search
int linear(int a[], int n, int data){
    int i;

    // Iterate through the array to search for the element
    for(i = 0; i < n; i++){
        if(a[i] == data){  // If the element matches the data
            return i;  // Return the index of the element
        }
    }
    return -1;  // If the element is not found, return -1
}
