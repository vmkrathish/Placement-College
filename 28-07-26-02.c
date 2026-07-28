#include <stdio.h>

int main()
{
    int t, i;
    int current = 0, maximum = 0;

    scanf("%d", &t);

    int entry[t], leave[t];

    for(i = 0; i < t; i++)
        scanf("%d", &entry[i]);

    for(i = 0; i < t; i++)
        scanf("%d", &leave[i]);

    for(i = 0; i < t; i++)
    {
        current = current + entry[i] - leave[i];

        if(current > maximum)
            maximum = current;
    }

    printf("%d", maximum);

    return 0;
}
