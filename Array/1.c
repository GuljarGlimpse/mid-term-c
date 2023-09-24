#include <stdio.h>

int main() {
    // Initialize an array of integers with 5 elements
    int myArray[5] = {10, 20, 30, 40, 50};

    // Print each element in the array
    printf("Elements in the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, myArray[i]);
    }

    return 0;
}
