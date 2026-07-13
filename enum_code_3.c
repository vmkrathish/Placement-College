#include <stdio.h>


enum grade{
  PASS = 1,
  FAIL = 0
};

int main(){
    enum grade result = PASS;
    switch(result){
        case 1:
            printf("The student passed the exam.");
            break;
        default:
            printf("The student got failed.");
    }
}

