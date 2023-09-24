#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input the number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years
    years = days / 365;

    // Calculate remaining days after subtracting years
    remainingDays = days % 365;

    // Calculate weeks
    weeks = remainingDays / 7;

    // Calculate remaining days after subtracting weeks
    remainingDays = remainingDays % 7;

    // Display the result
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}
