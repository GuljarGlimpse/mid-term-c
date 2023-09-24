#include <stdio.h>

int main() {
    int rows, cols;

    // Input the size of the 2D array from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    // Input elements of the 2D array from the user
    printf("Enter the elements of the %dx%d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Display the elements of the 2D array
    printf("Elements in the %dx%d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\n", array[i][j]);
        }
    }

    return 0;
}
