
#include <stdio.h>

int main() {
    
    char *coffee[] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};

    char *tea[] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};

    char *soup[] = {" Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"};

    char *beverages[] = {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"};

    char ch;
    int c;
    
    printf("Welcome to CCD\n\nPlease enter your choice:");
    
    scanf("%c", &ch);
    scanf("%d", &c);

    c--;

    if (ch == 'c'){
        printf("Enjoy your %s!", coffee[c]);
    }

    else if (ch == 't'){
        printf("Enjoy your %s!", tea[c]);
    }
    
    else if (ch == 's'){
        printf("Enjoy your %s!", soup[c]);
    }
    
    else if (ch == 'b'){
        printf("Enjoy your %s!", beverages[c]);
    }
    

    return 0;
}
