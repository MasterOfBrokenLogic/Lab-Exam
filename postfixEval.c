#include <stdio.h>
#include <ctype.h>

#define MAXSTACK 100           // Define maximum size of the stack
#define POSTFIXSIZE 100        // Define the size of the postfix expression

int stack[MAXSTACK];          // Declare the stack array
int top = -1;                 // Initialize the top of the stack to -1 (empty)

void push(int item) {
    if (top >= MAXSTACK - 1)  // Check if the stack is full
        printf("Stack Overflow\n");   // If full, print Stack Overflow
    else
        stack[++top] = item;   // If not full, push the item onto the stack
}

int pop() {
    if (top < 0)              // Check if the stack is empty
        printf("Stack Underflow\n"); // If empty, print Stack Underflow
    else
        return stack[top--];   // If not empty, pop and return the top element
}

void evalPostfix(char postfix[]) {
    int i, val, A, B;         // Declare variables for iteration, value, and operands
    char ch;                   // Declare a character variable to hold current postfix character

    // Loop through the postfix expression until reaching ')'
    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];       // Get the current character from postfix expression

        if (isdigit(ch)) {     // Check if the current character is a digit
            val = ch - '0';    // Convert character to integer (ASCII difference)
            push(val);         // Push the integer value onto the stack
        } else {                // If the character is an operator
            B = pop();         // Pop the top two values from the stack
            A = pop();         // First pop gives operand B, second gives operand A
            switch (ch) {      // Check the operator
                case '+': val = A + B; break;   // If operator is '+', perform addition
                case '-': val = A - B; break;   // If operator is '-', perform subtraction
                case '*': val = A * B; break;   // If operator is '*', perform multiplication
                case '/': val = A / B; break;   // If operator is '/', perform division
            }
            push(val);         // Push the result back onto the stack
        }
    }
    printf("Result = %d\n", pop());  // After the loop, pop the result and print it
}

int main() {
    char postfix[POSTFIXSIZE];    // Declare an array to hold the postfix expression
    int i;

    printf("Enter postfix expression, press ')' to end:\n");   // Prompt for postfix input
    for (i = 0; i < POSTFIXSIZE - 1; i++) {  // Loop to read characters into the array
        scanf(" %c", &postfix[i]);  // Read a character
        if (postfix[i] == ')')      // Stop input when ')' is encountered
            break;
    }

    evalPostfix(postfix);    // Call the function to evaluate the postfix expression
    return 0;                // Return 0 to indicate successful execution
}
