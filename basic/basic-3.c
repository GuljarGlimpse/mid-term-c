#include <stdio.h>

// Define symbolic constants using #define
#define PI 3.14159265359
#define MAX_VALUE 100

int main() {
    // Using constant values directly
    printf("The value of pi is: %f\n", 3.14159265359);

    // Using symbolic constants
    printf("The value of pi is: %f\n", PI);
    printf("The maximum allowed value is: %d\n", MAX_VALUE);

    // Arithmetic with constants
    double radius = 5.0;
    double area = PI * radius * radius;
    printf("The area of a circle with radius %f is: %f\n", radius, area);

    // Modifying the value of a symbolic constant (not recommended)
    // Note: This should be avoided in practice; constants should not be modified.
    #undef MAX_VALUE
    #define MAX_VALUE 200
    printf("The modified maximum allowed value is: %d\n", MAX_VALUE);

    return 0;
}
