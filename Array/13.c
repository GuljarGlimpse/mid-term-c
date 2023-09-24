#include <stdio.h>

int main() {
    int rows, cols;

    // Input the dimensions of the original 2D array from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int originalArray[rows][cols];
    int transposedArray[cols][rows];

    // Input elements of the original 2D array from the user
    printf("Enter the elements of the %dx%d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &originalArray[i][j]);
        }
    }

    // Transpose the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedArray[j][i] = originalArray[i][j];
        }
    }

    // Display the transposed array
    printf("Transposed %dx%d array:\n", cols, rows);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposedArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
