#include <stdio.h>

// Function to calculate the nth Fibonacci term using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: if n is 0 or 1, return n
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursively calculate Fibonacci term
    }
}

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        // Calculate and print the nth Fibonacci term
        int result = fibonacci(n);
        printf("The %dth Fibonacci term is %d\n", n, result);
    }

    return 0;
}
