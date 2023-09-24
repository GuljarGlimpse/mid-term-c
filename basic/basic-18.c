#include <stdio.h>

int main() {
    char smallLetter, capitalLetter;

    // Input a small letter from the user
    printf("Enter a small letter: ");
    scanf(" %c", &smallLetter); // Note the space before %c to consume any leading whitespace

    // Check if the input is a small letter
    if (smallLetter >= 'a' && smallLetter <= 'z') {
        // Transform it to a capital letter
        capitalLetter = smallLetter - 32; // ASCII difference between 'a' and 'A'
        printf("The corresponding capital letter is: %c\n", capitalLetter);
    } else {
        printf("You did not enter a small letter.\n");
    }

    return 0;
}
