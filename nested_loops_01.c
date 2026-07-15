#include <stdio.h>

int main() {
    int i, j, k,l, n=5;
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=1; i<=n; i++){
        
        for(k=i; k<n; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        
        printf("\n");
    }
    printf("\n");
    
}
