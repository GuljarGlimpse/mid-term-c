#include <stdio.h>

int main() {
    int myArray[] = {10, 20, 30, 20, 40, 20, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int targetElement;

    // Input the element to find its frequency
    printf("Enter the element you want to find the frequency of: ");
    scanf("%d", &targetElement);

    int frequency = 0;

    // Calculate the frequency of the target element in the array
    for (int i = 0; i < size; i++) {
        if (myArray[i] == targetElement) {
            frequency++;
        }
    }

    // Print the frequency of the target element
    printf("Frequency of %d in the array: %d\n", targetElement, frequency);

    return 0;
}
