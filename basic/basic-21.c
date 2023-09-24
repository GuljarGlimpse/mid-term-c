#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract the first digit
    firstDigit = number / 100;

    // Extract the last digit
    lastDigit = number % 10;

    // Calculate and display the squares of the first and last digits
    printf("Square of %d is %d\n", firstDigit, firstDigit * firstDigit);
    printf("Square of %d is %d\n", lastDigit, lastDigit * lastDigit);

    return 0;
}
