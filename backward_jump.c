#include <stdio.h>

void main(){
        int i = 1, n=5;
        print:
        printf("%d\n", i++);
        if (i < n) goto print;
        
        }
