#include <stdio.h>

// Function to check if a number is even
int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the isEven function to check if the number is even or odd
    if (isEven(num)) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
