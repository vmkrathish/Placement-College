#include <stdio.h>


//Enumerated datatype
enum day{
    MON,
    TUE,
    WED,
    THUR,
    FRI,
    SAT,
    SUN
};

void main(){
    
    enum day today = WED;
    printf("%d", today);

    
}

