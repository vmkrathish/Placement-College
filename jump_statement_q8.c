#include <stdio.h>


//Print x x2 x3 …… xn

void main(){
    int x, x1, n, a=1;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("Enter the length : ");
    scanf("%d", &n);

    x1 = x;
    print:
    
    printf("%d ", x);
    a++;
    x = x * x1;
    if (a<=n) goto print;

}

