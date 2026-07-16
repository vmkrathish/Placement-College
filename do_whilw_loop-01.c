// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int choice;

    do{
        //area of sq, rec, cir, triangle
        printf("Options\n");
        printf("1. Area of the Square\n");
        printf("2. Area of the Rectangle\n");
        printf("3. Area of the Circle\n");
        printf("4. Area of the Triangle\n");
        printf("5. Exit\n\n");
        
        printf("Enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                int s;
                printf("Enter the side of the Square: ");
                scanf("%d", &s);
                printf("Area of the Square: %d", s*s);
                break;
    
            case 2:
                int l, b;
                printf("Enter the Length of the Rectangle: ");
                scanf("%d", &l);
                printf("Enter the Breadth of the Rectangle: ");
                scanf("%d", &b);
                printf("Area of the Rectangle: %d", l*b);
                break;
            case 3:
                int r;
                printf("Enter the radius of the Circle: ");
                scanf("%d", &r);
                printf("Area of the Circle: %.2f", 3.14* r *r);
                break;
            case 4:
                int B,h;
                printf("Enter the breadth of the Triangle: ");
                scanf("%d", &B);
                printf("Enter the height of the Triangle: ");
                scanf("%d", &h);
                printf("Area of the Triangle: %.2f", 0.5*B*h);
                break;
            case 5:
                printf("I am closing the loop, tataaa, bye bye, seee uuuu\n");
                break;
            default:
                printf("Invalid Choice\n\n");
        }
    }while(choice!=5);
    
    
    printf("\n\n");

    
}
