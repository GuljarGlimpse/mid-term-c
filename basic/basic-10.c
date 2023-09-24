#include <stdio.h>

int main() {
    double side, area;

    // Input the length of the side from the user
    printf("Enter the length of the side of the square: ");
    scanf("%lf", &side);

    // Calculate the area of the square
    area = side * side;

    // Display the area
    printf("The area of the square with side %.2lf units is %.2lf square units.\n", side, area);

    return 0;
}
