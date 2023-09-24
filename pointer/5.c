#include <stdio.h>

int findStringLength(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Find the length of the input string using a pointer
    int length = findStringLength(inputString);

    // Display the length of the string
    printf("The length of the string is %d\n", length);

    return 0;
}
