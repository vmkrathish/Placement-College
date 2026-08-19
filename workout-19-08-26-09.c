#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char w1[6], w2[6], w3[6];

    scanf("%s", w1);
    scanf("%s", w2);
    scanf("%s", w3);

    for (int i = 0; w1[i] != '\0'; i++) {

        if (w1[i] == 'a' || w1[i] == 'e' ||
            w1[i] == 'i' || w1[i] == 'o' ||
            w1[i] == 'u') {

            w1[i] = '%';
        }
    }

    for (int i = 0; w2[i] != '\0'; i++) {

        if (!(w2[i] == 'a' || w2[i] == 'e' ||
              w2[i] == 'i' || w2[i] == 'o' ||
              w2[i] == 'u')) {

            w2[i] = '#';
        }
    }

    for (int i = 0; w3[i] != '\0'; i++) {
        w3[i] = toupper(w3[i]);
    }

    // Concatenate and print
    printf("%s%s%s", w1, w2, w3);

    return 0;
}
