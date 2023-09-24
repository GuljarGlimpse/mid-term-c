#include <stdio.h>
#include <string.h>

int countCharacter(char *str, char target) {
    int count = 0;

    while (*str != '\0') {
        if (*str == target) {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char inputString[100];
    char targetChar;

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Input the character to count
    printf("Enter the character to count: ");
    scanf(" %c", &targetChar); // Note the space before %c to consume any whitespace characters

    // Count the number of occurrences of the target character
    int count = countCharacter(inputString, targetChar);

    // Display the result
    printf("The character '%c' appears %d times in the string.\n", targetChar, count);

    return 0;
}
