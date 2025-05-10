# Queue Operations using Circular Queue

For Detailed Explanation and Steps, refer to the program: [Simple Queue Operations](./simpleQueue.c)

## Problem Statement:
We are implementing a Circular Queue that supports the following operations:
1. Insertion
2. Deletion
3. Displaying the current queue
The queue will be implemented using an array with a fixed size.

## Input Example:
- **Choice (1-4):** 1 (Insert)
- **Item to insert:** 5
- **Choice (1-4):** 1 (Insert)
- **Item to insert:** 10
- **Choice (1-4):** 2 (Delete)

## Logic:

- **Insert:** The item is inserted at the rear of the queue. The rear pointer is incremented, and the item is placed in the queue. If the queue is full, an overflow message is displayed.
  
- **Delete:** The item at the front of the queue is deleted. The front pointer is incremented. If the queue is empty, an underflow message is displayed.

- **Display:** The current elements in the queue are printed, from front to rear. If the queue is empty, a message indicating so is displayed.

### Code Walkthrough:

1. We define a queue with a maximum size using an array `q[]` and two pointers `front` and `rear`.
2. The `insert()` function inserts an item at the rear and handles overflow conditions.
3. The `del()` function deletes an item from the front and handles underflow conditions.
4. The `display()` function shows the current state of the queue.

---

### Code Snippet:

```c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int q[SIZE], front = -1, rear = -1;

void insert(int item) {
	if ((rear == SIZE - 1 && front == 0) || (rear + 1 == front)) {
		printf("Queue overflow\n");
		return;
	}
	if (front == -1) {
		front = 0;
	}
	rear = (rear + 1) % SIZE;
	q[rear] = item;
}

void del() {
	if (front == -1) {
		printf("Queue underflow\n");
		return;
	}
	printf("Deleted element: %d\n", q[front]);
	if (front == rear) {
		front = rear = -1;
	} else {
		front = (front + 1) % SIZE;
	}
}

void display() {
	int position;
	if (front == -1) {
		printf("Queue is empty\n");
	} else {
		printf("Queue after operation:\n");
		if (rear >= front) {
			for (position = front; position <= rear; position++) {
				printf("%d ", q[position]);
			}
		} else {
			for (position = front; position < SIZE; position++) {
				printf("%d ", q[position]);
			}
			for (position = 0; position <= rear; position++) {
				printf("%d ", q[position]);
			}
		}
		printf("\n");
	}
}

int main() {
	int item, ch;
	do {
		printf("Enter your choice:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
		scanf("%d", &ch);
		switch (ch) {
			case 1:
				printf("Enter the item: ");
				scanf("%d", &item);
				insert(item);
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid input\n");
		}
	} while (1);
}
```
```c
**Output:**
Enter your choice:
1. Insert
2. Delete
3. Display
4. Exit
1
Enter the item: 5
Queue after operation:
5 

Enter your choice:
1. Insert
2. Delete
3. Display
4. Exit
1
Enter the item: 10
Queue after operation:
5 10 

Enter your choice:
1. Insert
2. Delete
3. Display
4. Exit
2
Deleted element: 5
Queue after operation:
10 
