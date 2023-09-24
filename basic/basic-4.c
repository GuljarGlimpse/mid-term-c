#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform arithmetic operations and display the results
    printf("Sum: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Difference: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Product: %d * %d = %d\n", num1, num2, num1 * num2);

    // Check if the second number is not zero before division
    if (num2 != 0) {
        printf("Quotient: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
