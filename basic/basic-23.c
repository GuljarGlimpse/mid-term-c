#include <stdio.h>

int main() {
    int dividend, divisor, quotient = 0, remainder;

    // Input the dividend and divisor from the user
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check if the divisor is not zero
    if (divisor != 0) {
        // Calculate the quotient using division and subtraction
        while (dividend >= divisor) {
            dividend -= divisor;
            quotient++;
        }
        remainder = dividend;

        // Display the quotient and remainder
        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
