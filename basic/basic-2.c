#include <stdio.h>

int main() {
    // Input and output for integers
    int integerInput;
    printf("Enter an integer: ");
    scanf("%d", &integerInput);
    printf("You entered: %d\n", integerInput);

    // Input and output for floating-point numbers
    float floatInput;
    printf("Enter a floating-point number: ");
    scanf("%f", &floatInput);
    printf("You entered: %f\n", floatInput);

    // Input and output for characters
    char charInput;
    printf("Enter a character: ");
    scanf(" %c", &charInput); // Note the space before %c to consume any leading whitespace
    printf("You entered: %c\n", charInput);

    // Input and output for strings
    char stringInput[100]; // Assuming a maximum string length of 99 characters
    printf("Enter a string: ");
    scanf("%s", stringInput);
    printf("You entered: %s\n", stringInput);

    return 0;
}
