#include <stdio.h>

int main() {
    char sentence[1000]; // Assuming a maximum sentence length of 999 characters

    // Input a sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Display the entered sentence
    printf("You entered: %s", sentence);

    return 0;
}
