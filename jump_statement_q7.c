#include <stdio.h>


//Sum of even numbers
void main(){
    int n,sum=0, a=2;
    printf("Enter the number : ");
    scanf("%d", &n);

    print:
    sum += a;
    a += 2;
    if (a<=n) goto print;
    printf("The sum of Even numbers: %d ", sum);

}
