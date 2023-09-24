#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Calculate the length of the string
    int length = strlen(inputString);

    // Display the string in reverse order
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }

    printf("\n");

    return 0;
}
