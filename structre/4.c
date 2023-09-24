#include <stdio.h>
#include <math.h>

// Define the Point structure
struct Point {
    int x;
    int y;
};

double calculateDistance(struct Point p1, struct Point p2) {
    // Calculate the distance using the distance formula
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point point1, point2;

    // Input the coordinates of the first point
    printf("Enter the x-coordinate of Point 1: ");
    scanf("%d", &point1.x);
    printf("Enter the y-coordinate of Point 1: ");
    scanf("%d", &point1.y);

    // Input the coordinates of the second point
    printf("Enter the x-coordinate of Point 2: ");
    scanf("%d", &point2.x);
    printf("Enter the y-coordinate of Point 2: ");
    scanf("%d", &point2.y);

    // Calculate the distance between the two points
    double distance = calculateDistance(point1, point2);

    // Display the distance
    printf("Distance between Point 1 and Point 2: %.2f\n", distance);

    return 0;
}
