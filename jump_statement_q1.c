#include <stdio.h>


//Print even numbers from 2 to n
void main(){
    int n, a=2;
    printf("Enter the number of Even numbers to print: ");
    scanf("%d", &n);

    print:
    printf("%d ", a);
    a += 2;
    if (a<=n) goto print;
}
