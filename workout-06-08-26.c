#include <stdio.h>

// 1. Array notation
void arrayNotation(int arr[], int n) {
    printf("1. Array Notation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// 2. Sized array notation
void sizedArrayNotation(int arr[5], int n) {
    printf("2. Sized Array Notation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// 3. Pointer notation
void pointerNotation(int *arr, int n) {
    printf("3. Pointer Notation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

// 4. Modify array using array notation
void modifyArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] *= 2;
}

// 5. Find sum using pointer notation
int findSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    return sum;
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    // Original array
    arrayNotation(a, 5);
    sizedArrayNotation(a, 5);
    pointerNotation(a, 5);

    // Modify array
    modifyArray(a, 5);
    printf("4. After Modification: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Find sum
    printf("5. Sum of Array = %d\n", findSum(a, 5));

    return 0;
}
