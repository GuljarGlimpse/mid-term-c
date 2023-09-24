#include <stdio.h>

// Function to print even numbers in a given range using recursion
void printEven(int start, int end) {
    if (start > end) {
        return;
    } else {
        if (start % 2 == 0) {
            printf("%d ", start);
        }
        printEven(start + 1, end);
    }
}

// Function to print odd numbers in a given range using recursion
void printOdd(int start, int end) {
    if (start > end) {
        return;
    } else {
        if (start % 2 != 0) {
            printf("%d ", start);
        }
        printOdd(start + 1, end);
    }
}

int main() {
    int start, end;
    int choice;

    // Input the range from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Choose whether to print even or odd numbers
    printf("Choose an option:\n");
    printf("1. Print even numbers\n");
    printf("2. Print odd numbers\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Numbers in the specified range: ");

    // Print either even or odd numbers based on the choice
    if (choice == 1) {
        printEven(start, end);
    } else if (choice == 2) {
        printOdd(start, end);
    } else {
        printf("Invalid choice.\n");
    }

    printf("\n");

    return 0;
}

