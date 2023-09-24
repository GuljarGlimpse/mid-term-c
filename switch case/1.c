#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is the maximum initially
    max = num1;

    // Use a switch statement to compare and update the maximum
    switch (1) {
        case 1:
            if (num2 > max) {
                max = num2;
            }
        case 2:
            if (num3 > max) {
                max = num3;
            }
            break;
        default:
            printf("Invalid case.\n");
            return 1;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
