#include <stdio.h>

// Function to reverse an array of integers
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

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

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    // Reverse the array in-place
    reverseArray(myArray, size);

    // Print the reversed array
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    printf("\n");

    return 0;
}
