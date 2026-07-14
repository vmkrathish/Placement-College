#include <stdio.h>

int main() {
    
    //For loop Questions

    //1. Print even numbers from 2 to n
    printf("Even numbers: ");
    int i, c, sum, n = 10;
    for (i=2; i<=n; i+=2){
        printf("%d ", i);
    }
    printf("\n\n");
    
    // 2. Print odd numbers from 1 to n
    printf("Odd numbers: ");
    for (i=1; i<=n; i+=2){
        printf("%d ", i);
    }
    printf("\n\n");
    
    //3. Sum of natural non upto n
    sum = 0;
    for (i=1; i<=n; i++){
        sum += i;
    }
    printf("Sum of natural nos : %d\n", sum);
    printf("\n\n");
    
    //4. Print factorial of n
    n = 5;
    c = 1;
    for (i=1; i<=n; i++){
        c *= i;
    }
    printf("Factorial of '%d' : %d\n", n, c);
    printf("\n");
    
    //5. Print tables of a nth table
    n = 5;
    c = 10;
    printf("'%d' Table:\n", n);
    for (i=1; i<=c; i++){
        printf("%dx%d=%d\n", i, n, i*n);
    }
    printf("\n");
    
    //6. Sum of odd numbers
    
    n = 5;
    sum = 0;
    for (i=1; i<=n; i+=2){
        sum += i;
    }
    printf("Sum of Odd nos: %d\n", sum);
    printf("\n\n");
    
    //7. Sum of even numbers
    
    n = 5;
    sum = 0;
    for (i=2; i<=n; i+=2){
        sum += i;
    }
    printf("Sum of Even nos: %d\n", sum);
    printf("\n\n");
    
    //8. Print x x2 x3 …… xn
    
    n = 2;
    c = 10;
    int num = n;
    for (i=1; i<=c; i++){
        printf("%d ", num);
        num *= n;
    }
    printf("\n\n");
    
    //9. Print 1/x 1/x2 1/x3 …… 1/xn
    
    num = n;
    for (i=1; i<=c; i++){
        printf("%g ", 1.0 / num);
        num *= n;
    }
    printf("\n\n");
}
