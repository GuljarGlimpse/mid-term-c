#include <stdio.h>

int main() {
    int age;

    // Input the candidate's age from the user
    printf("Enter candidate's age: ");
    scanf("%d", &age);

    // Check if the candidate's age is eligible for voting
    if (age >= 18) {
        printf("The candidate is eligible to cast their vote.\n");
    } else {
        printf("The candidate is not eligible to cast their vote.\n");
    }

    return 0;
}
