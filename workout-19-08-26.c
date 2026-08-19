#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int getFare(char *s, char *d) {

    int path[] = {
        800, 600, 750, 900,
        1400, 1200, 1100, 1500
    };

    char *busStops[] = {
        "TH", "GA", "IC", "HA",
        "TE", "LU", "NI", "CA"
    };

    int l = sizeof(busStops) / sizeof(busStops[0]);


    int source = -1;
    int destination = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }

    for (int i = 0; d[i] != '\0'; i++) {
        d[i] = toupper(d[i]);
    }

    for (int i = 0; i < l; i++) {

        if (strcmp(busStops[i], s) == 0) {
            source = i;
        }

        if (strcmp(busStops[i], d) == 0) {
            destination = i;
        }
    }

    if (source == -1 || destination == -1 || source == destination) {
        return -1;
    }

    int distance = 0;

    if (source < destination) {

        for (int i = source + 1; i <= destination; i++) {
            distance += path[i];
        }
    }

    else {

        for (int i = source + 1; i < l; i++) {
            distance += path[i];
        }


        for (int i = 0; i <= destination; i++) {
            distance += path[i];
        }
    }

    double f = (distance / 1000.0) * 5;

    f = ceil(f);

    return (int)f;
}

int main() {

    char s[3], d[3];

    printf("Enter Source: ");
    scanf("%2s", s);
    printf("Enter Destination: ");
    scanf("%2s", d);

    int f = getFare(s, d);

    if (f == -1) {
        printf("INVALID OUTPUT\n");
    }
    else {
        printf("%.1f INR\n", (double)f);
    }

    return 0;
}
