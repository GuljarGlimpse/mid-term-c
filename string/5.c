#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Check if the input string is a palindrome
    if (isPalindrome(inputString)) {
        printf("Yes, it is a palindrome.\n");
    } else {
        printf("No, it is not a palindrome.\n");
    }

    return 0;
}
