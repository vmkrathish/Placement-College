#include <stdio.h>

int main() {
    // 15th term of the series: 0,0,7,6,14,12,21,18, 28
    
    int a = 0,b = 0, c, d;

    printf("Enter the term: ");
    scanf("%d", &c);

    for (int i=0;i<=c; i++){
        

        if (i % 2 == 0){
            a += 7;
            d = 0;
        }
        else{
            b += 6;
            d = 1;
        }
    }

    if(d==0) printf("%d", a);
    else printf("%d", b);
    

    return 0;
}
