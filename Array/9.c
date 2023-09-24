#include <stdio.h>

// Function to reverse an array of integers
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end pointers
        start++;
        end--;
    }
}

// Function to rotate an array of integers by a given number of positions
void rotateArray(int arr[], int size, int positions) {
    // Handle negative positions
    if (positions < 0) {
        positions = size + positions;
    }

    // Rotate the array using reverse
    reverseArray(arr, 0, positions - 1);
    reverseArray(arr, positions, size - 1);
    reverseArray(arr, 0, size - 1);
}

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int positions;

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate (positive or negative): ");
    scanf("%d", &positions);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    // Rotate the array by the specified number of positions
    rotateArray(myArray, size, positions);

    // Print the rotated array
    printf("\nArray after rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    printf("\n");

    return 0;
}
