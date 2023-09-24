#include <stdio.h>

int main() {
    int n;

    // Input the number of natural numbers you want to print in reverse order
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);

    printf("Natural Numbers in Reverse Order from %d to 1:\n", n);

    // Use a for loop to print natural numbers in reverse order
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
