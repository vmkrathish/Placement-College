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
    
    n = 4;
    char ch='*';
    for(i=1;i<=n;i++){
        //left space
        for(k=n-i;k>0;k--){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("%c", ch);
            break;
        }
        if(i>1){
            for(l=1; l< (2*i - 2); l++){
                printf(" ");
            }
            printf("%c", ch);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        //left space
        for(k=n-i;k>0;k--){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("%c", ch);
            break;
        }
        if(i>1){
            for(l=1; l< (2*i - 2); l++){
                printf(" ");
            }
            printf("%c", ch);
        }
        printf("\n");
    }
    
    printf("\n\n");

    
    /*
    1     1
    10   01
    101 101
    1010101
    */

    int var1=1;
    int var2=1;
    n=3;
    for(i=1; i<=n; i++){
        //left
        var1=1;
        for(j=1; j<=i;j++){
            printf("%d",var1);
            if (var1==1) var1=0;
            else var1=1;
        }
        
        //space
        if(i!=n){
            for(j=1; j<=2*(n-i); j++){
                printf(" ");
            }
        }
        //right

        if(i % 2 == 0)
            var2 = 0;
        else
            var2 = 1;
        for(j = 1; j <= i; j++) {
            printf("%d", var2);
            if(var2 == 1) var2 = 0;
            else var2 = 1;
        }
        
        printf("\n");
    }
    
    printf("\n\n");
    
    
    /*
    1
     2
      3
      1
     2
    3
    1
     2
      3
      1
     2
    3
    */
    
    n=3;
    int loop=2;
    for(int iter=1; iter<=loop; iter++){
        //right to left
        for(i=1; i<=n;i++){
            if(i!=1){
                for(j=1; j<i;j++){
                    printf(" ");
                }
            }
            printf("%d", i);
            printf("\n");
        }
        //left to right
        for(i=1; i<=n;i++){
            if(i!=n){
                for(j=n-i; j>=1;j--){
                    printf(" ");
                }
            }
            printf("%d", i);
            printf("\n");
        }
    }
    
    
    
    
    
    
    
    
    
}
