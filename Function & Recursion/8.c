#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return (unsigned long long)n * factorial(n - 1); // Recursively calculate factorial
    }
}

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        // Calculate and print the factorial of n
        unsigned long long result = factorial(n);
        printf("%d! = %llu\n", n, result);
    }

    return 0;
}
