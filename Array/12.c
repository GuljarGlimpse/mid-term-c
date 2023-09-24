#include <stdio.h>

int main() {
    int rows, cols;

    // Input the dimensions of the 2D array from the user
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

    // Find the largest element and its position
    int largest = array[0][0];
    int rowPos = 0, colPos = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
                rowPos = i;
                colPos = j;
            }
        }
    }

    // Display the largest element and its position
    printf("The largest element in the array is %d at position (%d,%d)\n", largest, rowPos, colPos);

    return 0;
}
