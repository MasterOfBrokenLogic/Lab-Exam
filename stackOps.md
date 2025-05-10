# Stack Operations

For Detailed Explanation and Steps, refer to the program: [Stack Operations](./stackOps.c)

## Problem Statement:
This program simulates a stack data structure. It provides operations like push, pop, and display to manipulate and view the contents of the stack.

## Operations:
1. **Push:** Adds an element to the top of the stack.
2. **Pop:** Removes the top element from the stack and displays it.
3. **Display:** Displays all the elements currently present in the stack.

## Input Example:
- **Push operation:** Enter the item to push onto the stack.
- **Pop operation:** Removes the topmost element from the stack.
- **Display operation:** Displays all the elements in the stack.

## Logic:

### Initial Stack:
The stack is initially empty, with a top pointer set to `-1`.

- **Push operation:** Adds an element to the stack by incrementing the `top` and placing the new element at that position.
- **Pop operation:** Removes the element from the top and decreases the `top` pointer.
- **Display operation:** Prints all elements from index `0` to `top`.

### Code Walkthrough:

1. **Initialization:**
   - The stack is initialized with a size of `10` and a `top` pointer set to `-1` to indicate an empty stack.
   
2. **Push operation:**
   - If the stack is full (`top == SIZE - 1`), a "stack overflow" message is shown.
   - Otherwise, the item is added to the stack by incrementing the `top` and assigning the value.

3. **Pop operation:**
   - If the stack is empty (`top == -1`), a "stack underflow" message is displayed.
   - Otherwise, the top element is removed, and the `top` is decremented.

4. **Display operation:**
   - If the stack is empty, a message "stack is empty" is displayed.
   - Otherwise, all the elements in the stack are printed.

---

### Code Snippet:

```c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct stack {
    int s[SIZE];
    int top;
};

void push(struct stack *, int);
void pop(struct stack *);
void display(struct stack *);

int main() {
    struct stack st;
    int ch, item;

    st.top = -1;

    do {
        printf("Enter your choice:\n");
        printf("1: Push\n2: Pop\n3: Display\n4: Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the item:\n");
                scanf("%d", &item);
                push(&st, item);
                break;

            case 2:
                pop(&st);
                break;

            case 3:
                display(&st);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid input\n");
        }
    } while (1);

    return 0;
}

void push(struct stack *st, int item) {
    if (st->top == SIZE - 1)
        printf("Stack overflow\n");
    else
        st->s[++st->top] = item;
}

void pop(struct stack *st) {
    if (st->top == -1)
        printf("Stack underflow\n");
    else
        printf("Popped element is: %d\n", st->s[st->top--]);
}

void display(struct stack *st) {
    if (st->top == -1)
        printf("Stack is empty\n");
    else {
        printf("Elements are:\n");
        for (int i = 0; i <= st->top; i++) {
            printf("%d ", st->s[i]);
        }
        printf("\n");
    }
}
```

---

### Output Snippet:

```c
Enter your choice:
1: Push
2: Pop
3: Display
4: Exit
1
Enter the item:
10
Enter your choice:
1: Push
2: Pop
3: Display
4: Exit
1
Enter the item:
20
Enter your choice:
3
1: Push
2: Pop
3: Display
4: Exit
Display:
Elements are:
10 20
