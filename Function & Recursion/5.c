#include <stdio.h>

// Function to calculate the sum of natural numbers in a given range using recursion
int sumOfNaturalNumbers(int start, int end) {
    if (start > end) {
        return 0; // Base case: if start is greater than end, return 0
    } else {
        return start + sumOfNaturalNumbers(start + 1, end); // Recursively sum numbers
    }
}

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Calculate the sum of natural numbers in the given range using the function
    int result = sumOfNaturalNumbers(start, end);

    printf("Sum of natural numbers from %d to %d is %d\n", start, end, result);

    return 0;
}
