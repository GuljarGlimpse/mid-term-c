#include <stdio.h>
#include <string.h>

int countVowels(char str[]) {
    int length = strlen(str);
    int vowelCount = 0;

    for (int i = 0; i < length; i++) {
        char currentChar = tolower(str[i]); // Convert the character to lowercase for case-insensitive comparison
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Count the number of vowels in the input string
    int vowels = countVowels(inputString);

    // Display the result
    printf("There are %d vowels in the string.\n", vowels);

    return 0;
}
