#include <stdio.h>

int main() {
    
    int a, b, i, j,  n, c, l, x, sum, num;
    
    // sum of digits of a given number
    sum = 0;
    num = 1819;
    for (i=0; num > 0; i++){
        c = num % 10;
        num = num /10;
        sum += c;
    }
    printf("Sum of digits of given nos : %d\n", sum);
    printf("\n");
    
    
    //determine whether a given number is prime or not.
    num = 9;
    c = 0;
    for(i=2;i<num; i++){
        if (num == i) continue;
        else if (num % i == 0) c = 1;
    }
    if (c==0) printf("'%d' is a PRIME number", num);
    else printf("'%d' is not a PRIME number", num);
    printf("\n\n");
    
    
    //check whether a given number is an Armstrong number or not
    sum = 0;
    num = 1634;
    n = num;
    
    l = 0;
    for (i=0; num > 0; i++){
        num = num /10;
        l++;
    }
    num = n;
    
    for (i=0; num > 0; i++){
        c = num % 10;
        num = num /10;
        a = 1;
        for (j=0; j<l;j++){
            a *= c;
        }
        sum += a;
    }

    if (sum==n) printf("'%d' is a Armstrong number", n);
    else printf("'%d' is not a Armstrong number", n);
    printf("\n\n");
    
    
    //sum of series 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 +……+ 1/n
    num = 5;
    float sum_n = 1;
    printf("Sum of the series: 1 ");
    for (i=2; i<=num; i++){
        printf("+ %g ", 1.0/i);
    }
    printf("\n\n");
    
    //display the sum of the series [ 9 + 99 + 999 + 9999 ...]
    num = 9;
    n = 5;
    printf("Sum of the series: [ 9");
    for (i=2; i<=num; i++){
        printf(" + ");
        for (j=1; j<=i; j++){
            printf("%d", num);
        }
    }
    printf(" ]");
    printf("\n\n");
    
    // display the n terms of square natural number and their sum.
    num = 10;
    printf("Sum of square of the natural numbers: ");
    for (i=0; i<=num; i++){
        printf("%d ", i*i);
    }
    printf("\n\n");
    
    
    //find the Armstrong number for a given range of number
    int start, end;
    start = 100;
    end = 2000;
    printf("Possible Armstrong numbers: ");
    for(int k = start; k<=end; k++){
        num = k;
        sum = 0;
        n = num;
        
        
        l = 0;
        for (i=0; num > 0; i++){
            num = num /10;
            l++;
        }
        num = n;
        
        for (i=0; num > 0; i++){
            c = num % 10;
            num = num /10;
            a = 1;
            for (j=0; j<l;j++){
                a *= c;
            }
            sum += a;
        }
    
        if (sum==n) printf("'%d' ", n);
        
    }
    printf("\n\n");
    
    
    //find the prime numbers within a range of numbers.
    start = 1;
    end = 100;
    printf("Possible Prime numbers: ");
    for(int k = start; k<=end; k++){
        num = k;
        c = 0;
        if (k<2) continue;
        for(i=2;i<num; i++){
            if (num == i) continue;
            else if (num % i == 0) c = 1;
        }
        if (c==0) printf("'%d' ", num);
        
    }
    printf("\n\n");
    
    
    //display the first n terms of Fibonacci series
    n = 50;
    a = 1;
    b = 2;
    printf("Fibonacci series: 1 1");
    for(i=0; b<=n; i++){
        printf(" %d", b);
        c = b;
        b = a + b;
        a = c;
    }
    printf("\n\n");

    //display the number in reverse order
    num = 9181;
    n = num;
    int rev_num = 0;
    for(i=0; num>0; i++){
        c = num % 10;
        num = num/10;
        rev_num += c;
        rev_num *= 10;
    }
    rev_num = rev_num / 10;
    printf("Reverse of the number '%d': %d", n, rev_num);
    printf("\n\n");


    //find sum of series 1+x+x2+x3……+xn
    num = 2;
    l = 10;
    printf("Sum of series: 1");
    for (i=1; i<=l; i++){
        b = 1;
        for(j=0;j<i;j++){
            b *= num;
        }
        printf("+%d", b);
    }
    printf("\n\n");

    //find sum of series 1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + ….. + 1/(n*n)
    
    num = 2;
    n = num;
    l = 10;
    printf("Sum of series: 1");
    for (i=n; i<=l; i++){
        //printf(" + %g", 1.0/(i*i));
        printf(" + 1/(%d*%d)", i,i);
    }
    
    printf("\n\n");

    
    //find the sum of the series [ 1-X2/2!+X4/4!- X6/6!+.........].
    int fact(int z){
        int val=1;
        for (int s =1; s<=z; s++){
            val *= s;
         }
        return val;
    }
    int power_num(int digit, int p){
        int val_p=1;
        for (int s=0; s<p; s++){
            val_p = val_p * digit;
        }
        return val_p;
    }
    
    x = 2;
    l = 10;
    char ch = '-';
    printf("Sum of series: 1");
    
    for (i=2; i<=l; i=i+2){
        printf(" %c ", ch);
        
        printf("%d/%d", power_num(x,i),fact(i));

        //printf("%g", power_num(x,i)/fact(i));
        
        if (ch == '-') ch = '+';
        else ch = '-';
    }

    printf("\n\n");

    
}
