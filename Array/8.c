#include <stdio.h>

// Function to remove duplicates from an array of integers
int removeDuplicates(int arr[], int size) {
    if (size <= 1) {
        return size; // No duplicates to remove
    }

    int uniqueIndex = 0; // Index to keep track of unique elements

    for (int i = 1; i < size; i++) {
        int isDuplicate = 0; // Flag to check if the current element is a duplicate

        // Check if the current element is a duplicate
        for (int j = 0; j <= uniqueIndex; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If it's not a duplicate, add it to the unique elements
        if (!isDuplicate) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    return uniqueIndex + 1; // Return the new size of the array without duplicates
}

int main() {
    int myArray[] = {10, 20, 10, 30, 20, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    // Remove duplicates from the array
    int newSize = removeDuplicates(myArray, size);

    // Print the array after removing duplicates
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", myArray[i]);
    }

    printf("\n");

    return 0;
}
