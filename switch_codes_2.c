#include <stdio.h>

int main() {
    
    
    
    
    ///Electricity bill
    int unit, ch;
    float price;
    printf("Enter the units of current used: ");
    scanf("%d", &unit);
    
    if ((unit>100) && (unit <200)) ch = 1;
    else if ((unit>200) && (unit <300)) ch = 2;
    else if ((unit>300) && (unit <400)) ch = 3;
    else if ((unit>400) && (unit <500)) ch = 4;
    
    switch(ch){
        
        case 1:
        price = unit * 20;
            break;
            
        case 2:
            price = unit * 40;
            break;
            
        case 3:
            price = unit * 60;
            break;
            
        case 4:
            price = unit * 75;
            break;
            
        default:
            price = unit * 90;
            break;
    }
    printf("Total charge for %d: %.2f", unit, price);
    
    
    
    
    

    
    
}
