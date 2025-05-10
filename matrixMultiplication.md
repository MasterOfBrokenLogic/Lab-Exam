# Matrix Multiplication

For Detailed Explanation and Steps, refer to the program: [Matrix Multiplication](./matrixMultiplication.c)

## Problem Statement:
We are tasked with multiplying two matrices. This program demonstrates how to multiply two matrices, provided that the number of columns of the first matrix equals the number of rows of the second matrix.

## Input Example:
- **Matrix 1 Dimensions:** 2 rows, 3 columns
- **Matrix 1 Elements:**  
  1 2 3  
  4 5 6  

- **Matrix 2 Dimensions:** 3 rows, 2 columns  
- **Matrix 2 Elements:**  
  7 8  
  9 10  
  11 12  

## Logic:

### Step-by-Step Process:
1. First, we check if matrix multiplication is possible by ensuring the number of columns in matrix 1 is equal to the number of rows in matrix 2.
2. The multiplication is done by calculating the dot product of rows of the first matrix and columns of the second matrix.
3. The result of the multiplication is stored in the result matrix.

### Example Calculation:

- **Matrix 1:**  
  1 2 3  
  4 5 6  

- **Matrix 2:**  
  7 8  
  9 10  
  11 12  

**Result Matrix:**

- Row 1, Column 1 = (1 * 7) + (2 * 9) + (3 * 11)  
- Row 1, Column 2 = (1 * 8) + (2 * 10) + (3 * 12)  
- Row 2, Column 1 = (4 * 7) + (5 * 9) + (6 * 11)  
- Row 2, Column 2 = (4 * 8) + (5 * 10) + (6 * 12)  

### Final Result:
**Result Matrix:**  
58 64  
139 154  

## Code Walkthrough:

1. The program first accepts the dimensions of two matrices.
2. It checks if the multiplication is possible (i.e., the number of columns of matrix 1 equals the number of rows of matrix 2).
3. Then, the program inputs the elements of both matrices.
4. The multiplication is carried out and the result is displayed.

---

### Code Snippet:

```c
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    // Input matrix dimensions
    printf("Enter the row and column of Matrix 1: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the row and column of Matrix 2: ");
    scanf("%d %d", &m2, &n2);

    // Check if matrix multiplication is possible
    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n2];

    // Input elements of matrix1
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of matrix2
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

---

### Output Snippet:

```c
Enter the row and column of Matrix 1: 2 3
Enter the row and column of Matrix 2: 3 2
Enter elements of the first matrix:
1 2 3
4 5 6
Enter elements of the second matrix:
7 8
9 10
11 12
Result of matrix multiplication:
58 64
139 154
```
