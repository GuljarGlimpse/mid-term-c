#include <stdio.h>

int main() {
    char character;
    int isAlphabet;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any leading whitespace

    // Check if the character is an alphabet using conditional operators
    isAlphabet = ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) ? 1 : 0;

    // Display the result
    if (isAlphabet) {
        printf("%c is an alphabet.\n", character);
    } else {
        printf("%c is not an alphabet.\n", character);
    }

    return 0;
}
