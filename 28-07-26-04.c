#include <stdio.h>

int main()
{
    int n = 10;
    int k = 5;
    int candies = 10;
    int order;

    scanf("%d", &order);

    if(order <= 0 || order > candies)
    {
        printf("INVALID INPUT");
    }
    else
    {
        candies = candies - order;

        printf("NUMBER OF CANDIES SOLD : %d\n", order);
        printf("NUMBER OF CANDIES LEFT : %d", candies);

        if(candies <= k)
            candies = n;
    }

    return 0;
}
