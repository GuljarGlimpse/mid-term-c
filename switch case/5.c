#include <stdio.h>

int main() {
    int num1, num2;
    int choice;
    double result;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Input the choice of operation
    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Remainder\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Perform the calculation based on the choice using a switch statement
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %.2lf\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %.2lf\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = (double)num1 / num2;
                printf("Result: %d / %d = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please enter a valid choice (1-5).\n");
            break;
    }

    return 0;
}
