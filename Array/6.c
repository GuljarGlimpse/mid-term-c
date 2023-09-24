#include <stdio.h>

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int targetElement;

    // Input the element to search for
    printf("Enter the element you want to search for: ");
    scanf("%d", &targetElement);

    int found = 0; // Flag to indicate if the element is found
    int position = -1; // Variable to store the position of the found element

    // Perform linear search
    for (int i = 0; i < size; i++) {
        if (myArray[i] == targetElement) {
            found = 1; // Set the flag to indicate that the element is found
            position = i; // Store the position of the found element
            break; // Exit the loop once the element is found
        }
    }

    // Check if the element was found and print the result
    if (found) {
        printf("Element %d found at position %d.\n", targetElement, position);
    } else {
        printf("Element %d not found in the array.\n", targetElement);
    }

    return 0;
}
