#include <stdio.h>

int main() {
    int myArray[] = {10, 20, 5, 40, 30};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    if (size < 2) {
        printf("Array should have at least two elements to find the second largest.\n");
        return 1;
    }

    int largest = myArray[0];
    int secondLargest = myArray[0];

    // Find the largest and second largest elements in the array
    for (int i = 1; i < size; i++) {
        if (myArray[i] > largest) {
            secondLargest = largest;
            largest = myArray[i];
        } else if (myArray[i] > secondLargest && myArray[i] != largest) {
            secondLargest = myArray[i];
        }
    }

    // Print the second largest element
    printf("Second largest element in the array: %d\n", secondLargest);

    return 0;
}
