#include <stdio.h>

int main() {
    char alphabet;

    printf("Lowercase English Alphabets from 'a' to 'z':\n");

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
        printf("%c ", alphabet);
    }

    printf("\n");

    return 0;
}
