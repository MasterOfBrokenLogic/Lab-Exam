# Postfix Expression Evaluation Using Stack

## Problem Description:
In this program, we evaluate a postfix expression using a stack. The postfix expression is a mathematical expression where the operator follows the operands. The program will read a postfix expression, process it, and display the result.

### Postfix Evaluation Process:
- **Postfix Expression:** Operands are followed by their operators.
- **Evaluation Logic:** The algorithm processes the postfix expression from left to right:
  1. **If the character is a digit:** Push it onto the stack.
  2. **If the character is an operator:** Pop two elements from the stack, perform the operation, and push the result back onto the stack.
  3. **Final Result:** After processing the entire postfix expression, the final result will be on top of the stack.

## Code Walkthrough:

1. **Data Structures:**
   - We use a **stack** (array of integers) to store operands while processing the expression.

2. **Push Operation:** Adds an operand to the stack.
3. **Pop Operation:** Removes and returns the top operand from the stack.

4. **Postfix Evaluation:**
   - Loop through the postfix expression.
   - If the character is a digit, convert it to an integer and push it to the stack.
   - If the character is an operator, pop two operands from the stack, perform the operation, and push the result.

5. **Result:** Once the loop finishes, the result of the expression will be at the top of the stack.

---

### Code Snippet:

```c
#include <stdio.h>
#include <ctype.h>

#define MAXSTACK 100
#define POSTFIXSIZE 100

int stack[MAXSTACK];
int top = -1;

void push(int item) {
    if (top >= MAXSTACK - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = item;
}

int pop() {
    if (top < 0)
        printf("Stack Underflow\n");
    else
        return stack[top--];
}

void evalPostfix(char postfix[]) {
    int i, val, A, B;
    char ch;

    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];

        if (isdigit(ch)) {
            val = ch - '0';  // Convert char to integer
            push(val);
        } else {
            B = pop();  // Pop top element
            A = pop();  // Pop second top element
            switch (ch) {
                case '+': val = A + B; break;
                case '-': val = A - B; break;
                case '*': val = A * B; break;
                case '/': val = A / B; break;
            }
            push(val);  // Push result of operation back to stack
        }
    }
    printf("Result = %d\n", pop());  // The result will be the last element in the stack
}

int main() {
    char postfix[POSTFIXSIZE];
    int i;

    printf("Enter postfix expression, press ')' to end:\n");
    for (i = 0; i < POSTFIXSIZE - 1; i++) {
        scanf(" %c", &postfix[i]);
        if (postfix[i] == ')')  // Stop when ')' is encountered
            break;
    }

    evalPostfix(postfix);
    return 0;
}
### Code Explanation:

1. **`push(int item)`**: Adds an item to the stack.
   - If the stack is full, it prints "Stack Overflow".

2. **`pop()`**: Removes and returns the top item from the stack.
   - If the stack is empty, it prints "Stack Underflow".

3. **`evalPostfix(char postfix[])`**:
   - This function processes the postfix expression character by character.
   - It pushes digits to the stack and performs operations on the top two elements of the stack when an operator is encountered.
   - After the expression is fully evaluated, it prints the result.

4. **`main()`**:
   - Takes user input for the postfix expression and calls `evalPostfix()` to compute the result.

### Example Input and Output:

**Input:**
Enter postfix expression, press ')' to end:
23 * 5 +

**Output:**
Result = 11

This program evaluates the postfix expression `23*5+` which is equivalent to `2 * 3 + 5`, and the result is `11`.
