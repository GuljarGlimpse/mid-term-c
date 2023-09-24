#include <stdio.h>

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers between %d and %d using for loop:\n", start, end);
    // Using a for loop to print even numbers
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\nEven numbers between %d and %d using while loop:\n", start, end);
    // Using a while loop to print even numbers
    int current = start;
    while (current <= end) {
        if (current % 2 == 0) {
            printf("%d ", current);
        }
        current++;
    }

    printf("\nEven numbers between %d and %d using do-while loop:\n", start, end);
    // Using a do-while loop to print even numbers
    current = start;
    do {
        if (current % 2 == 0) {
            printf("%d ", current);
        }
        current++;
    } while (current <= end);

    printf("\n");

    return 0;
}
