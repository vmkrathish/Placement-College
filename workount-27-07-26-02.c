#include <stdio.h>

int main() {
    //Pointer
    
    int a;
    int *ptr;
    int **q;
    
    a=10;
    ptr=&a;
    q= &ptr;
    
    printf("%d\n", *ptr);
    printf("%d\n", **q);
}
