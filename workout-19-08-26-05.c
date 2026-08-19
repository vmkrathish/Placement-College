#include <stdio.h>

int main() {

    int age;
    int total = 0;
    int count = 0;

    while (count < 20) {

        if (scanf("%d", &age) != 1) {
            break;
        }

        if (age <= 0 || age > 120) {
            printf("INVALID INPUT");
            return 0;
        }

        if (age < 17) {
            total += 200;
        }
        else if (age <= 40) {
            total += 400;
        }
        else {
            total += 300;
        }

        count++;
    }

    printf("Total Income %d INR", total);

    return 0;
}
