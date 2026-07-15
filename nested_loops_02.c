#include <stdio.h>

int main() {
    
    // Nested Loop
    
    for(i=1; i<=n; i++){
        
        for(k=i; k<n; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        for(l=i-1; l>=1; l--){
            printf("%d", l);
        }
        printf("\n");
    }
    printf("\n");
    
    
    
    
    for(i=n; i>=1; i--){
        
        for(k=i; k<n; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        for(l=i-1; l>=1; l--){
            printf("%d", l);
        }
        printf("\n");
    }
    printf("\n");
    
    
    
    

}
