#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    char name[100];
    int age;
    float salary;
    char designation[100];
};

int main() {
    int n;

    // Input the number of employees from the user
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n]; // Declare an array of Employee structures

    // Input details for each employee
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee #%d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
    }

    // Display details of each employee
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee #%d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Designation: %s\n", employees[i].designation);
        printf("\n");
    }

    return 0;
}
