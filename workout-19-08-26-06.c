#include <stdio.h>

int prime(int n) {

    if (n < 2) {
        return 0;
    }

    for (int i = 2; i < n; i++) {

        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void check(int n) {

    if (n < 0) {
        printf("Please enter the positive number");
    }
    else {

        if (prime(n)) {
            printf("Prime");
        }
        else {
            printf("Not Prime");
        }
    }
}

int main() {

    int n;
    scanf("%d", &n);
    check(n);
    return 0;
}
