#include <stdio.h>

int main() {
    int num;

    // Input the number for which you want to print the multiplication table
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);

    // Use a for loop to print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
