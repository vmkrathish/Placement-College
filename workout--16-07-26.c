// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,l,num,n;
    int a,b,A,B,N,ch;
    int c, count, temp;
    /*
    A
    BB
    CCC
    DDDD
    */
    
    ch=65;
    n=7;
    for(i=1; i<=n; i++){
        for(j=1;j<=i;j++){
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
    printf("\n\n");
    
    /*
    a
    ab
    abc
    abcd
    */
    
    ch=97;
    n=5;
    for(i=1; i<=n; i++){
        for(j=1;j<=i;j++){
            printf("%c", ch);
            ch++;
        }
        ch=97;
        printf("\n");
    }
    printf("\n\n");
    
    /*********************
        1
       232
      34543
     4567654
    567898765
    */
    
    /*
    ch=1;
    n=5;
    for(i=1; i<=n; i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("%d", ch);
            ch++;
        }
        
        
        printf("\n");
    }
    printf("\n\n");
    */
    

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */
    
    ch=1;
    n=5;
    for(i=1; i<=n; i++){
        for(j=1;j<=i;j++){
            printf("%d ", ch);
            ch++;
        }
        printf("\n");
    }
    printf("\n\n");
    
    
    /*
    Example-1
    Input
    5 10
    Output
    05 06 07 08 09 10
    Example-2
    Input
    9 100
    Output
    009 010 011 012 ...... 099 100
    
    */
    a=9;
    b=100;
    int len_func(int z){
        int len=0;
        for(i=0;z>0;i++){
            z = z/10;
            len++;
        }
        return len;
    }

    for(k=a;k<=b;k++){
        int add_0 = len_func(b) - len_func(k);
        for(j=0;j<add_0;j++){
            printf("0");
        }
        printf("%d ",k);
        
    }
    printf("\n\n");



    ////Mint of kids
    n=0;
    int len, total, mints;
    
    printf("Enter 1st kid mint count: ");
    scanf("%d", &n);
    printf("Enter total. no of kids: ");
    scanf("%d",&len);
    total = n;

    for (i = 2; i <= len; i++)
    {
        mints = total - 1;
        total += mints;
    }

    printf("Total mints:%d", total);
    printf("\n\n");

    
    //Series:
    //Find the 15th term:
    // 0,0,7,6,14,12,21,18,28
    
    a=0;
    b=0;
    n=15;
    printf("The '%d' of the series: ", n);
    for(i=1,j=2; j<=n||i<=n ;i+=2,j+=2){
        a+=7;
        b+=6;
        if(i==n-1) printf("%d", a);
        else if(j==n-1) printf("%d", b);
    }
    printf("\n\n");
    
    //Series:
    //Find the nth term of the series
    //1,1,2,3,4,9,8,27,16,81,32,243
    
    n=10;
    int term=1;
    
    if (n % 2 != 0){
        for (i = 1; i < (n + 1) / 2; i++)
            term *= 2;
    }

    else{
        for (i = 1; i < n / 2; i++)
            term *= 3;
    }
    printf("The '%d' of the series: %d",n, term);

    printf("\n\n");
    
    //Series:
    //STDIN -- read, STDOUT -- out
    //1,1,2,3,4,9,8,27,16,81,32,243
    
    n=16;
    term=1;
    printf("STDIN: ");
    scanf("%d", &n);
    if (n % 2 != 0){
        for (i = 1; i < (n + 1) / 2; i++)
            term *= 2;
    }

    else{
        for (i = 1; i < n / 2; i++)
            term *= 3;
    }
    printf("STDOUT: %d",term);

    printf("\n\n");


}
