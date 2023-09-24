#include <stdio.h>

// Define the Rectangle structure
struct Rectangle {
    float length;
    float width;
    float area;
};

int main() {
    struct Rectangle rect; // Declare a Rectangle structure

    // Input the length and width from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

    // Calculate the area
    rect.area = rect.length * rect.width;

    // Display the details of the rectangle
    printf("Rectangle Details:\n");
    printf("Length: %.2f\n", rect.length);
    printf("Width: %.2f\n", rect.width);
    printf("Area: %.2f\n", rect.area);

    return 0;
}
