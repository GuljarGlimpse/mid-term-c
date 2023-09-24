#include <stdio.h>
#include <ctype.h>

int main() {
    char character;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any leading whitespace

    // Check if the character is an alphabet, digit, or special character
    if (isalpha(character)) {
        printf("%c is an alphabet.\n", character);
    } else if (isdigit(character)) {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is a special character.\n", character);
    }

    return 0;
}
