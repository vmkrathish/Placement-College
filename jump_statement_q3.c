#include <stdio.h>


//Sum of natural non upto n
void main(){
    int n, sum=0, a=1;
    printf("Enter the number: ");
    scanf("%d", &n);

    print:
    sum += a;
    a++;
    if (a<=n) goto print;
    printf("Sum of '%d' natural numbers: %d", n, sum);
}
