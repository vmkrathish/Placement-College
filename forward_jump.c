#include <stdio.h>



int main(){
    int n=10;
    goto skip;
    printf("%d", n);
    skip:
    printf(“check run”);
}
