#include <stdio.h>

int main() {
    double length, width, area;

    // Input the length and width of the rectangle from the user
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Display the area
    printf("The area of the rectangle with length %.2lf units and width %.2lf units is %.2lf square units.\n", length, width, area);

    return 0;
}
