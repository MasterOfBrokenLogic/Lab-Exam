#include <stdio.h>
#include <stdlib.h>

#define SIZE 10  // Define the maximum size of the queue

int q[SIZE], front = -1, rear = -1;  // Declare the queue and the front and rear pointers

// Function to insert an item into the queue
void insert(int item) {
    // Check for queue overflow: if both front and rear are at the same position, the queue is full
    if ((rear == SIZE - 1 && front == 0) || (rear + 1 == front)) {
        printf("Queue overflow\n");
        return;
    }
    
    // If the queue is empty, set front to 0
    if (front == -1) {
        front = 0;
    }
    
    // Move the rear pointer to the next position in a circular manner
    rear = (rear + 1) % SIZE;
    
    // Insert the item at the rear position
    q[rear] = item;
}

// Function to delete an item from the queue
void del() {
    // Check for queue underflow: if front is -1, the queue is empty
    if (front == -1) {
        printf("Queue underflow\n");
        return;
    }
    
    // Print the deleted item from the front
    printf("Deleted element: %d\n", q[front]);
    
    // If the front and rear are the same, it means the queue is empty after deletion
    if (front == rear) {
        front = rear = -1;  // Reset both front and rear to -1
    } else {
        // Move front pointer to the next position in a circular manner
        front = (front + 1) % SIZE;
    }
}

// Function to display the queue elements
void display() {
    int position;
    
    // If front is -1, the queue is empty
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue after operation:\n");
        
        // If rear is greater than or equal to front, print the elements in order
        if (rear >= front) {
            for (position = front; position <= rear; position++) {
                printf("%d ", q[position]);
            }
        } else {
            // If rear has wrapped around the circular queue, print the first part from front to SIZE-1
            for (position = front; position < SIZE; position++) {
                printf("%d ", q[position]);
            }
            
            // Print the second part from 0 to rear
            for (position = 0; position <= rear; position++) {
                printf("%d ", q[position]);
            }
        }
        printf("\n");
    }
}

int main() {
    int item, ch;
    
    // Menu-driven loop to allow the user to perform queue operations
    do {
        printf("Enter your choice:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        scanf("%d", &ch);
        
        // Switch case to handle the user choice
        switch (ch) {
            case 1:
                printf("Enter the item: ");
                scanf("%d", &item);  // Take input from the user
                insert(item);  // Call insert function
                break;

            case 2:
                del();  // Call delete function
                break;

            case 3:
                display();  // Call display function to show the queue
                break;

            case 4:
                exit(0);  // Exit the program
            
            default:
                printf("Invalid input\n");  // Invalid choice handling
        }
    } while (1);  // Infinite loop to keep the menu running until the user exits

    return 0;
}
