// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    // break and continue
    
    int i,j, n= 10;
    for(i=1;i<=n; i++){
        if (i==5) break;
        printf("%d ", i);
    }
    printf("\n\n");
    
    for(i=1;i<=n; i++){
        if (i==5) continue;
        printf("%d ", i);
    }
    printf("\n\n");
    
    
    n=10;
    for(i=1,j=n; i<=n , j>=0;i++, j--){
        printf("%d\t%d\n", i,j);
        
    }
}
