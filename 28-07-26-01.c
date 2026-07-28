#include <stdio.h>

int main()
{
    int n, i, count = 1, max;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            count++;
            max = arr[i];
        }
    }

    printf("%d", count);

    return 0;
}
