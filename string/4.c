#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], concatenatedString[200];

    // Input the first string from the user
    printf("Enter the first string: ");
    scanf("%s", string1);

    // Input the second string from the user
    printf("Enter the second string: ");
    scanf("%s", string2);

    // Concatenate the two strings
    strcpy(concatenatedString, string1);
    strcat(concatenatedString, string2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", concatenatedString);

    return 0;
}

