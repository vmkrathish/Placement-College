#include <stdio.h>


//Print 1/x 1/x2 1/x3 …… 1/xn
void main(){
    int x, x1, n, a=1;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("Enter the length : ");
    scanf("%d", &n);

    x1 = x;
    print:
    
    printf("1/%d ", x);
    a++;
    x = x * x1;
    if (a<=n) goto print;

}
