#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Input temperature in Celsius from the user
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (9 * celsius) / 5 + 32;

    // Display the result
    printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
