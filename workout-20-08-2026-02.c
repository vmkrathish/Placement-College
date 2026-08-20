#include <stdio.h>

int main() {
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int top = 0, bottom = 2;
    int left = 0, right = 3;

    while (top <= bottom && left <= right) {

        // Left to right
        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        // Right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }

    return 0;
}
