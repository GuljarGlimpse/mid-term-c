#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Nested if statements to find the largest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
