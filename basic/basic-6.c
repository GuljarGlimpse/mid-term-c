#include <stdio.h>

int main() {
    int hours, minutes;

    // Input hours and minutes from the user
    printf("Enter the number of hours: ");
    scanf("%d", &hours);
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Calculate the total minutes
    int totalMinutes = (hours * 60) + minutes;

    // Display the result
    printf("Total minutes: %d\n", totalMinutes);

    return 0;
}
