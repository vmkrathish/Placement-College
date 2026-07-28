#include <stdio.h>

int main()
{
    int weight;

    scanf("%d", &weight);

    if(weight < 0)
    {
        printf("INVALID INPUT");
    }
    else if(weight == 0)
    {
        printf("Time Estimated: 0 minutes");
    }
    else if(weight <= 2000)
    {
        printf("Time Estimated: 25 minutes");
    }
    else if(weight <= 4000)
    {
        printf("Time Estimated: 35 minutes");
    }
    else if(weight <= 7000)
    {
        printf("Time Estimated: 45 minutes");
    }
    else
    {
        printf("OVERLOADED");
    }

    return 0;
}
