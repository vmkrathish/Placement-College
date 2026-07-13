#include <stdio.h>


//Sum of odd numbers
void main(){
    int n,sum=0, a=1;
    printf("Enter the number : ");
    scanf("%d", &n);

    print:
    sum += a;
    a += 2;
    if (a<=n) goto print;
    printf("The sum of odd numbers: %d ", sum);
}
