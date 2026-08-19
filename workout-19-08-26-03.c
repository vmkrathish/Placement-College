#include <stdio.h>
#include <string.h>

int main() {

    char p[50];
    char choice;
    char c[10][50];
    int n = 0;

    int p_commission;
    int c_commission = 250;

    scanf("%s", p);
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') {

        char input[500];
        scanf(" %[^\n]", input);

        char *token = strtok(input, ",");

        while (token != NULL) {
            strcpy(c[n], token);
            n++;
            token = strtok(NULL, ",");
        }
    }

    printf("Total Members: %d\n", n + 1);
    printf("Commission Details\n");

    p_commission = n * 500;

    printf("%s: %d INR\n", p, p_commission);

    for (int i = 0; i < n; i++) {
        printf("%s: %d INR\n", c[i], c_commission);
    }

    return 0;
}
