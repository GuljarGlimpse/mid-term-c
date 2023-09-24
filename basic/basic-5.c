#include <stdio.h>

int main() {
    int x = 5;
    int y;

    // Pre-increment
    y = ++x; // Increment x first, then assign to y
    printf("Pre-increment: x = %d, y = %d\n", x, y); // x = 6, y = 6

    x = 5; // Reset x to 5

    // Post-increment
    y = x++; // Assign x to y first, then increment x
    printf("Post-increment: x = %d, y = %d\n", x, y); // x = 6, y = 5

    x = 5; // Reset x to 5

    // Pre-decrement
    y = --x; // Decrement x first, then assign to y
    printf("Pre-decrement: x = %d, y = %d\n", x, y); // x = 4, y = 4

    x = 5; // Reset x to 5

    // Post-decrement
    y = x--; // Assign x to y first, then decrement x
    printf("Post-decrement: x = %d, y = %d\n", x, y); // x = 4, y = 5

    return 0;
}
