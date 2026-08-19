#include <stdio.h>

int main() {

    int n;
    int result;

    scanf("%d", &n);

    if (n % 2 == 1) {
        result = n - 1;
    }
    else {
        result = (n - 2) / 2;
    }

    printf("%d", result);

    return 0;
}

