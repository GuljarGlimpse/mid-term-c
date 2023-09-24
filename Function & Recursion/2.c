#include <stdio.h>

// Function to calculate the cube of a number
double cube(double num) {
    return num * num * num;
}

int main() {
    double num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Call the cube function to calculate the cube of the number
    double result = cube(num);

    printf("The cube of %.2lf is %.2lf\n", num, result);

    return 0;
}
