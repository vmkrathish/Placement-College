#include <stdio.h>

int main() {
    //Pointer arithmetics
    
    int a;
    int *ptr;

    a=10;
    ptr=&a;
    printf("%d\n", &a);
    printf("%d\n", ptr);

    ptr++;
    
    printf("%d\n", ptr);
    
    ptr--;
    ptr--;
    
    printf("%d\n", ptr);

}
