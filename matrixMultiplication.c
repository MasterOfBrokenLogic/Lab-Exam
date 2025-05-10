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
