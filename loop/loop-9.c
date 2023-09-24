#include <stdio.h>

void printTriangleA(int n) {
    printf("Triangle A:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printTriangleB(int n) {
    printf("\nTriangle B:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printTriangleC(int n) {
    printf("\nTriangle C:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printTriangleD(int n) {
    printf("\nTriangle D:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printTriangleE(int n) {
    printf("\nTriangle E:\n");
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printTriangleF(int n) {
    printf("\nTriangle F:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printTriangleG(int n) {
    printf("\nTriangle G:\n");
    int coef = 1;
    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the triangles: ");
    scanf("%d", &n);

    printTriangleA(n);
    printTriangleB(n);
    printTriangleC(n);
    printTriangleD(n);
    printTriangleE(n);
    printTriangleF(n);
    printTriangleG(n);

    return 0;
}
