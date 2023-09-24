#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print the ASCII value of the character
    printf("ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
