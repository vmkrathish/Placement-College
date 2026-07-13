// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>

int main() {
    
    char ch = 'A';

    if (isalpha(ch)){
        printf("It is a alphabet");
    }
    
    else  printf("It is not a alphabet");
    
    printf("\n\n");
    
    if (isupper(ch)) printf("It is a uppercase");
    
    else if (islower(ch)) printf("It is a lowercase");
    
    printf("\n\n");

    char c = '#';
    if (isalpha(c)){
        printf("It is a alphabet");
    }
    else if (isdigit(c)){
        printf("It is a Number");
    }
    else  printf("It is a Symbol");
    
    
    //Leap year code
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("'%d' is a leap year", year);
    else printf("'%d' is not aleap year", year);
    
    printf("\n\n");
    
    //Pass or Fail Check
    int mark;
    printf("Enter the mark: ");
    scanf("%d", &mark);
    
    if (mark < 50) printf("'%d'  is not pass mark", mark);
    else printf("'%d' is pass mark", mark);
    
    printf("\n\n");
    
    

}
