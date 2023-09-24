#include <stdio.h>

int main() {
    char character;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any leading whitespace

    // Check if the character is an uppercase or lowercase alphabet
    if ((character >= 'a' && character <= 'z')) {
        printf("%c is a lowercase alphabet.\n", character);
    } else if ((character >= 'A' && character <= 'Z')) {
        printf("%c is an uppercase alphabet.\n", character);
    } else {
        printf("%c is not an alphabet.\n", character);
    }

    return 0;
}
