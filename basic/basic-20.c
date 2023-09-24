#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract the first digit
    firstDigit = number / 100;

    // Extract the last digit
    lastDigit = number % 10;

    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;

    // Display the result
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}
