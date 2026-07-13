#include <stdio.h>


// Print tables of a nth table
void main(){
    int n, l, a=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Length of the table: ");
    scanf("%d", &l);

    print:
    printf("%dx%d=%d\n", a,n, n*a);
    a++;
    if (a<=l) goto print;
}
