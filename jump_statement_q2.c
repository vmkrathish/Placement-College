#include <stdio.h>


// Print odd numbers from 1 to n
void main(){
    int n, a=1;
    printf("Enter the number of Odd numbers to print: ");
    scanf("%d", &n);

    print:
    printf("%d ", a);
    a += 2;
    if (a<=n) goto print;
}
