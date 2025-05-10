#include <stdio.h>      // Include standard input-output header
#include <stdlib.h>     // Include standard library header for malloc and exit

// Define the structure for a tree node
struct tree {
    int data;                  // Integer data of the node
    struct tree *left, *right; // Pointers to left and right children
};

// Function to create a new node with a given value
struct tree* createNode(int value) {
    struct tree* newNode = (struct tree*)malloc(sizeof(struct tree)); // Allocate memory
    newNode->data = value;        // Assign data
    newNode->left = NULL;         // Set left child to NULL
    newNode->right = NULL;        // Set right child to NULL
    return newNode;               // Return the new node
}

// Function to insert a node into the BST
struct tree* insertNode(struct tree* root, int value) {
    if (root == NULL) {
        return createNode(value); // If tree is empty, create a new node as root
    }

    if (value < root->data) {
        // Insert in the left subtree if value is smaller
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        // Insert in the right subtree if value is greater
        root->right = insertNode(root->right, value);
    }

    return root; // Return unchanged root pointer
}

// Function to perform Inorder Traversal (Left, Root, Right)
void inorderTraversal(struct tree* root) {
    if (root != NULL) {
        inorderTraversal(root->left);          // Visit left subtree
        printf("%d ", root->data);             // Print root
        inorderTraversal(root->right);         // Visit right subtree
    }
}

// Function to perform Preorder Traversal (Root, Left, Right)
void preorderTraversal(struct tree* root) {
    if (root != NULL) {
        printf("%d ", root->data);             // Print root
        preorderTraversal(root->left);         // Visit left subtree
        preorderTraversal(root->right);        // Visit right subtree
    }
}

// Function to perform Postorder Traversal (Left, Right, Root)
void postorderTraversal(struct tree* root) {
    if (root != NULL) {
        postorderTraversal(root->left);        // Visit left subtree
        postorderTraversal(root->right);       // Visit right subtree
        printf("%d ", root->data);             // Print root
    }
}

// Main function - entry point
int main() {
    struct tree* root = NULL;   // Declare and initialize root node as NULL
    int choice, value;          // Variables for menu choice and value to insert

    while (1) {
        // Display menu options
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert Node\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); // Read user choice

        switch (choice) {
            case 1:
                // Insert a new node
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                root = insertNode(root, value); // Insert into BST
                break;

            case 2:
                // Perform Inorder Traversal
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;

            case 3:
                // Perform Preorder Traversal
                printf("Preorder Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;

            case 4:
                // Perform Postorder Traversal
                printf("Postorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;

            case 5:
                // Exit program
                exit(0);

            default:
                // Handle invalid menu choice
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0; // End of program
}
