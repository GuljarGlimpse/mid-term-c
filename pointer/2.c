#include <stdio.h>

int findLargest(int *arr, int size) {
    int largest = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }

    return largest;
}

int main() {
    int arr[] = {3, 5, 1, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr; // Pointer to the first element of the array

    int largest = findLargest(ptr, size);

    printf("The largest element in the array is %d\n", largest);

    return 0;
}
