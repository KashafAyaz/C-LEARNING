#include <stdio.h>

int recursiveMinimum(const int arr[], int size) {
    if (size == 1) {                 // base case: one element
        return arr[0];
    }

    int minOfRest = recursiveMinimum(arr, size - 1);   // min of first size-1 elements

    if (arr[size - 1] < minOfRest) {
        return arr[size - 1];
    }
    return minOfRest;
}

int main() {
    int arr[] = {8, 3, 15, 1, 9, 4};
    int size = sizeof arr / sizeof arr[0];

    printf("The smallest element is %d\n", recursiveMinimum(arr, size));
    return 0;
}