#include <stdio.h>
int main() {
    int a[100], pos, n, num, i;

    // Taking the number of array elements as input
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    // Taking the array elements as input
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Taking the number to be inserted and the position to insert it
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    // Shifting elements one step to the right to make space for the new number
    for(i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Inserting the new number at the correct position
    a[pos - 1] = num;
    // Increasing the size of the array after insertion
    n++;   //You can either use n++ or n = n + 1;

    // Printing the new array after insertion
    printf("New array is: ");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}
