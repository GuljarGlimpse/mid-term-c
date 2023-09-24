#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Calculate the length of the string using strlen
    int length = strlen(inputString);

    // Display the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}
