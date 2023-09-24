#include <stdio.h>

int main() {
    int myArray[] = {10, 20, 5, 40, 30};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    if (size == 0) {
        printf("Array is empty.\n");
        return 1;
    }

    int smallest = myArray[0];
    int largest = myArray[0];

    // Find the smallest and largest elements in the array
    for (int i = 1; i < size; i++) {
        if (myArray[i] < smallest) {
            smallest = myArray[i];
        }
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }

    // Print the smallest and largest elements
    printf("Smallest element in the array: %d\n", smallest);
    printf("Largest element in the array: %d\n", largest);

    return 0;
}
