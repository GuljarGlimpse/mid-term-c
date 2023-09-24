#include <stdio.h>
#include <string.h>

// Define the Book structure
struct Book {
    char title[100];
    char author[100];
    float price;
    int publicationYear;
};

int main() {
    int n;

    // Input the number of books from the user
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n]; // Declare an array of Book structures

    // Input details for each book
    for (int i = 0; i < n; i++) {
        printf("Enter details for Book #%d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Publication Year: ");
        scanf("%d", &books[i].publicationYear);
    }

    // Display details of each book
    printf("\nBook Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Book #%d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Publication Year: %d\n", books[i].publicationYear);
        printf("\n");
    }

    return 0;
}
