#include <stdio.h>

int main() {
    int totalDays, years, months, remainingDays;

    // Input the total number of days from the user
    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);

    // Calculate years
    years = totalDays / 365;

    // Calculate remaining days after subtracting years
    remainingDays = totalDays % 365;

    // Calculate months
    months = remainingDays / 30;

    // Calculate remaining days after subtracting months
    remainingDays = remainingDays % 30;

    // Display the result
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remainingDays);

    return 0;
}
