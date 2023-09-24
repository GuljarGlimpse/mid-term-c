#include <stdio.h>

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // You can handle the error as needed
    }
}

int main() {
    double num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform arithmetic operations using functions
    double sum = add(num1, num2);
    double difference = subtract(num1, num2);
    double product = multiply(num1, num2);
    double quotient = divide(num1, num2);

    // Print the results
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Product: %.2lf\n", product);
    printf("Quotient: %.2lf\n", quotient);

    return 0;
}
