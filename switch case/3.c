#include <stdio.h>

int main() {
    int num;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Use a switch statement to check if the number is even or odd
    switch (num % 2) {
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
            printf("%d is an odd number.\n", num);
            break;
        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}
