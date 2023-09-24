#include <stdio.h>

int main() {
    char character;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any leading whitespace

    // Check if the character is a vowel or a consonant
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        // Convert the character to lowercase for easy comparison
        char lowercaseChar = tolower(character);

        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            printf("%c is a vowel.\n", character);
        } else {
            printf("%c is a consonant.\n", character);
        }
    } else {
        printf("%c is not a valid alphabet character.\n", character);
    }

    return 0;
}
