#include <stdio.h>

int main() {
    //Arrays using Pointer
    
    int i, n=10;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    
    for(i=0; i<n; i++){
        printf("%d\n", *(a+i)); // a[]
    }
    

}
