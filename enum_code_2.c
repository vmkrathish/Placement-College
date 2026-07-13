#include <stdio.h>




enum day{
    MON = 10,
    TUE = 20,
    WED = 30,
    THUR =40,
    FRI = 50,
    SAT = 60,
    SUN = 70
};

void main(){
    
    enum day today = WED;
    switch(today){
        case 10:
            printf("Day was MON.");
            break;
        case 20:
            printf("Day was TUE.");
            break;
        case 30:
            printf("Day was WED.");
            break;
        case 40:
            printf("Day was THUR.");
            break;
        case 50:
            printf("Day was FRI.");
            break;
        case 60:
            printf("Day was SAT.");
            break;
        case 70:
            printf("Day was SUN.");
            break;
        default:
            printf("INVALID CHOICE");
        
    }

    
}
