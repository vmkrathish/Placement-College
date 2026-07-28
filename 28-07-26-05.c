#include <stdio.h>

int main()
{
    int oxygen[3][3];
    int i, j;
    int sum;
    int avg[3];
    int max;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &oxygen[i][j]);

            if(oxygen[i][j] < 1 || oxygen[i][j] > 100)
            {
                printf("INVALID INPUT");
                return 0;
            }
        }
    }

    for(j = 0; j < 3; j++)
    {
        sum = 0;

        for(i = 0; i < 3; i++)
            sum = sum + oxygen[i][j];

        avg[j] = (sum + 1) / 3;
    }

    max = avg[0];

    for(i = 1; i < 3; i++)
    {
        if(avg[i] > max)
            max = avg[i];
    }

    if(max < 70)
    {
        printf("All trainees are unfit.");
    }
    else
    {
        for(i = 0; i < 3; i++)
        {
            if(avg[i] == max)
                printf("Trainee Number : %d\n", i + 1);
        }
    }

    return 0;
}
