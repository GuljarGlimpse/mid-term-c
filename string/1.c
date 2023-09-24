#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    // Input the first string from the user
    printf("Enter the first string: ");
    scanf("%s", string1);

    // Input the second string from the user
    printf("Enter the second string: ");
    scanf("%s", string2);

    // Compare the two strings using strcmp
    if (strcmp(string1, string2) == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    return 0;
}
