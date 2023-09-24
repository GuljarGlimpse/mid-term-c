#include <stdio.h>

int main() {
    int number, reverse = 0;

    // Input a two-digit number from the user
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Check if the input is a two-digit number
    if (number >= 10 && number <= 99) {
        // Calculate the reverse of the number
        while (number != 0) {
            int digit = number % 10;
            reverse = reverse * 10 + digit;
            number /= 10;
        }

        // Display the reverse number
        printf("Reverse of the number: %d\n", reverse);
    } else {
        printf("You did not enter a two-digit number.\n");
    }

    return 0;
}
