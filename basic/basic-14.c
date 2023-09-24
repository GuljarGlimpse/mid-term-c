#include <stdio.h>

int main() {
    int asciiValue;

    // Input an ASCII number from the user
    printf("Enter an ASCII number: ");
    scanf("%d", &asciiValue);

    // Convert the ASCII number to a character and display it
    char character = (char)asciiValue;
    printf("The character for ASCII value %d is: %c\n", asciiValue, character);

    return 0;
}
