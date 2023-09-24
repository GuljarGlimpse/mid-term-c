#include <stdio.h>

int main() {
    printf("ASCII Values of All Characters:\n");

    for (int i = 0; i <= 127; i++) {
        printf("Character: %c, ASCII Value: %d\n", i, i);
    }

    return 0;
}
