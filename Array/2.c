#include <stdio.h>

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int sum = 0;

    // Calculate the sum of all elements in the array
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {
        sum += myArray[i];
    }

    // Print the sum
    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}
