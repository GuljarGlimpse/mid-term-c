#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input a positive integer 'n' from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of odd numbers between 1 and n
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
