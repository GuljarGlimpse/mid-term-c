#include <stdio.h>

int main() {
    char capitalLetter, smallLetter;

    // Input a capital letter from the user
    printf("Enter a capital letter: ");
    scanf(" %c", &capitalLetter); // Note the space before %c to consume any leading whitespace

    // Check if the input is a capital letter
    if (capitalLetter >= 'A' && capitalLetter <= 'Z') {
        // Transform it to a small letter
        smallLetter = capitalLetter + 32; // ASCII difference between 'A' and 'a'
        printf("The corresponding small letter is: %c\n", smallLetter);
    } else {
        printf("You did not enter a capital letter.\n");
    }

    return 0;
}
