#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add the digit to the sum
        num /= 10;        // Remove the last digit
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
