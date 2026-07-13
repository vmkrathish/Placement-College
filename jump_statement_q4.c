#include <stdio.h>


//Print factorial of n
void main(){
    int n, a=1,fac=1;
    printf("Enter the number: ");
    scanf("%d", &n);

    print:
    fac *= a;
    a++;
    if (a<=n) goto print;
    printf("The factoria of '%d': %d", n,fac);
}
