#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        // Swap the characters at start and end pointers
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers inward
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Reverse the input string using a pointer
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}
