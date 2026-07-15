#include <stdio.h>

int main() {
    
    // Nested Loop
    int i, j, k,l, n=3;
    
    /* Patten
      *
     ***
    *****
    *****
     ***
      *
    */
    
    
    for(i=1; i<=n; i++){
        
        for(k=i; k<n; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        for(l=i-1; l>=1; l--){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--){
        
        for(k=i; k<n; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        for(l=i-1; l>=1; l--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    
    /*Patten
    #######
    #     #
    #     #
    #     #
    #     #
    #######
    */
    n = 5;
    for(i=1; i<=n; i++){
        if (i==1 || i==n){
            for(k=1; k<=n;k++){
                printf("#");
            }
        }
        else{
            for(j=1; j<=n; j++){
                if (j==1||j==n){
                    printf("#");
                }
                else printf(" ");
            }
        }
        printf("\n");

    }
    printf("\n\n");
    
    /*
    1     1
    12   21
    123 321
    1234321
    */
    n=4;
    for(i=1; i<=n;i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        

        if (i != n) {
            for (k = 1; k < 2 * (n - i); k++) {
                printf(" ");
            }
        }
        
        for(j=i; j>=1; j--){
            if(j==n) continue;
            printf("%d",j);
        }
        
        printf("\n");
    }
    printf("\n\n");


    
    /*
       #
      # #
     #   #
    #     #
     #   #
      # #
       #
    */
    
    n = 3;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("-");
        }
        printf("\n");
    }
    
}
