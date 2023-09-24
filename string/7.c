#include <stdio.h>
#include <string.h>

void replaceCharacter(char str[], char findChar, char replaceChar) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == findChar) {
            str[i] = replaceChar;
        }
    }
}

int main() {
    char inputString[100];
    char findChar, replaceChar;

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Input the character to find and the character to replace it with
    printf("Enter the character to find: ");
    scanf(" %c", &findChar); // Note the space before %c to consume any whitespace characters
    printf("Enter the character to replace it with: ");
    scanf(" %c", &replaceChar);

    // Replace the specified character in the input string
    replaceCharacter(inputString, findChar, replaceChar);

    // Display the modified string
    printf("Modified string: %s\n", inputString);

    return 0;
}

