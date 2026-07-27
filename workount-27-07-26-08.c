#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i;
    int det;

    printf("Enter the 9 elements of the matrix:\n");

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    scanf("%d %d %d", &g, &h, &i);

    det = a * (e * i - f * h)
        - b * (d * i - f * g)
        + c * (d * h - e * g);

    printf("Determinant = %d\n", det);

    return 0;
}
