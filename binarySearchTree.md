# [Binary Search Tree](./binarySearchTree.c) (BST) Operations in C

This program demonstrates the operations on a **Binary Search Tree** (BST) including **Insertion** and different types of **Traversal** (Inorder, Preorder, Postorder). The program allows the user to interactively insert nodes into the tree and perform traversals.

---

## Problem Statement:

The program implements a **Binary Search Tree**, a tree data structure where each node has at most two children. The tree maintains the following properties:
- The left child of a node contains a value less than the node.
- The right child of a node contains a value greater than the node.

The program includes:
- Inserting nodes into the tree.
- Traversing the tree in three ways:
  - **Inorder Traversal**: Left → Root → Right
  - **Preorder Traversal**: Root → Left → Right
  - **Postorder Traversal**: Left → Right → Root

---

## Input Example:

```
Binary Search Tree Operations:
1. Insert Node
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter your choice: 
```

- **Choice 1**: Insert a node with a specific value into the BST.
- **Choice 2**: Perform **Inorder Traversal**.
- **Choice 3**: Perform **Preorder Traversal**.
- **Choice 4**: Perform **Postorder Traversal**.
- **Choice 5**: Exit the program.

---

## Code Snippet:

```c
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct tree {
    int data;
    struct tree *left, *right;
};

// Function to create a new node
struct tree* createNode(int value) {
    struct tree* newNode = (struct tree*)malloc(sizeof(struct tree));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the Binary Search Tree
struct tree* insertNode(struct tree* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Function for Inorder Traversal
void inorderTraversal(struct tree* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function for Preorder Traversal
void preorderTraversal(struct tree* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function for Postorder Traversal
void postorderTraversal(struct tree* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Main function
int main() {
    struct tree* root = NULL;
    int choice, value;

    while (1) {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert Node\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                root = insertNode(root, value);
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;

            case 3:
                printf("Preorder Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
```

---

## **Output Example**

Assume the following insertions: `10`, `20`, `30`, `25`, `5`

```c
Binary Search Tree Operations:
1. Insert Node
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter your choice: 1
Enter the value to insert: 10

Enter your choice: 1
Enter the value to insert: 20

Enter your choice: 1
Enter the value to insert: 30

Enter your choice: 1
Enter the value to insert: 25

Enter your choice: 1
Enter the value to insert: 5

Enter your choice: 2
Inorder Traversal: 5 10 20 25 30

Enter your choice: 3
Preorder Traversal: 10 5 20 30 25

Enter your choice: 4
Postorder Traversal: 5 25 30 20 10
```

---

## **Conclusion:**

This program gives a clear understanding of **BST operations**, especially how elements are inserted and how different traversals are performed.

--- 
