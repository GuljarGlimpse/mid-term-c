#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace

    // Convert the character to lowercase for easier comparison
    ch = tolower(ch);

    // Use a switch statement to check if the character is a vowel or a consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if (ch >= 'a' && ch <= 'z') {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input: not a letter.\n");
            }
            break;
    }

    return 0;
}
