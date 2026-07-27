#include <stdio.h>

int main() {
    //Pointer
    
    int a;
    int *ptr;
    
    a=10;
    ptr=&a;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", &ptr);
}
