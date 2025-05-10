#include <stdio.h>    // Header for input-output functions
#include <stdlib.h>   // Header for exit() function

#define SIZE 10       // Define the maximum size of the stack

// Define a structure for the stack
struct stack {
    int s[SIZE];      // Array to store stack elements
    int top;          // Variable to track the top of the stack
};

// Function prototypes
void push(struct stack *, int);     // Function to push element onto stack
void pop(struct stack *);           // Function to pop element from stack
void display(struct stack *);       // Function to display elements of stack

int main() {
    struct stack st;    // Create a stack structure
    int ch, item;       // Variables to store user choice and item to be pushed

    st.top = -1;        // Initialize stack top to -1 (stack is empty)

    // Menu-driven program
    do {
        printf("Enter your choice:\n");
        printf("1: Push\n2: Pop\n3: Display\n4: Exit\n");
        scanf("%d", &ch);   // Read user's choice

        switch (ch) {
            case 1:
                printf("Enter the item:\n");
                scanf("%d", &item);      // Read item to push
                push(&st, item);         // Call push function
                break;

            case 2:
                pop(&st);                // Call pop function
                break;

            case 3:
                display(&st);            // Call display function
                break;

            case 4:
                exit(0);                 // Exit the program

            default:
                printf("Invalid input\n");  // Handle invalid choice
        }
    } while (1);  // Repeat until user chooses to exit

    return 0;
}

// Function to push an item into the stack
void push(struct stack *st, int item) {
    if (st->top == SIZE - 1)  // Check for overflow
        printf("Stack overflow\n");
    else
        st->s[++st->top] = item;  // Increment top and insert item
}

// Function to pop an item from the stack
void pop(struct stack *st) {
    if (st->top == -1)        // Check for underflow
        printf("Stack underflow\n");
    else
        printf("Popped element is: %d\n", st->s[st->top--]);  // Print and remove top item
}

// Function to display all elements of the stack
void display(struct stack *st) {
    if (st->top == -1)        // If stack is empty
        printf("Stack is empty\n");
    else {
        printf("Elements are:\n");
        for (int i = 0; i <= st->top; i++) {  // Print all elements from 0 to top
            printf("%d ", st->s[i]);
        }
        printf("\n");  // Newline for better formatting
    }
}
